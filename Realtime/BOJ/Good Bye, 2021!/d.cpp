#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100001
#define INF 1e9+7
#define x first
#define y second
#define pll pair<long long,long long>
#define piii pair<pair<int,int>,int>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll n, m; cin >> n >> m;
    vector<ll> arr;
    vector<pll> edge, graph, cur;
    arr.resize(n+1);
    edge.resize(m+1);
    graph.resize(n+1);
    cur.resize(n+1);
    for(int i=0; i<=n; i++){
        cur[i]={1e11, 1e11};
    }
    for(int i=0; i<m; i++){
        int a, b; cin >> a >> b;
        edge[i]={a,b};
        graph[a].push_back({b,i});
        graph[b].push_back({a,i});
    }

    cur[1]={0,0};
    queue<ll> q;
    q.push(1);
    ll flag=0;
    while(!q.empty()){
        ll now=q.top();
        q.pop();
        for(auto i : graph[now]){
            if(cur[i.x].x==1e11) q.push(i.x);

            if(cur[i.x].x>cur[now].x){
                if(cur[i.x].y>i.y){
                    cur[i.x]={cur[now].x, i.y+1};
                }
                else if(cur[i.x].x>cur[now].x+1){
                    cur[i.x]={cur[now].x+1, i.y+1};
                }
            }
            else if(cur[i].x==cur[now].x){
                if(cur[i.x].y>)
            }
        }
    }

    return 0;
}