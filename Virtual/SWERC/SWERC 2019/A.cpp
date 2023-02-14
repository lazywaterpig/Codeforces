#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define pii pair<int, int>
#define piii pair<int, pair<int, int>>
#define MAX 100100
#define INF 1e9+7
using namespace std;

pii g[1010][1010];

int dist(int x1, int y1, int x2, int y2){
    int tmp = 0.99999 + sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    return tmp;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int xs, ys; cin >> xs >> ys;
    int xd, yd; cin >> xd >> yd;
    
    int b; cin >> b; // maximal distance possible

    int c[101]; cin >> c[0]; // cost array
    
    int t; cin >> t; // number of transportation types
    for(int i=1; i<=t; i++) cin >> c[i];
    
    int n; cin >> n; // number of stations
    
    vector<pii> pos(n+1);
    vector<pii> con[n+1];
    
    for(int i=1; i<=n; i++){
        int tmp[3];
        for(int j=0; j<3; j++) cin >> tmp[j];
        pos[i]={tmp[0],tmp[1]};

        while(tmp[2]--){
            cin >> tmp[0] >> tmp[1];
            con[i].push_back({tmp[0]+1,tmp[1]});
        }
    }

    for(int i=0; i<n+2; i++){
        for(int j=0; j<n+2; j++) g[i][j]={0,0};
    }
    
    for(int i=1; i<=n; i++){
        int ds = dist(xs, ys, pos[i].first, pos[i].second);
        int dd = dist(xd, yd, pos[i].first, pos[i].second);
        g[0][i] = g[i][0] = {c[0]*ds, ds};
        g[n+1][i] = g[i][n+1] = {c[0]*dd, dd};
    }
    g[0][n+1] = g[n+1][0] = {c[0]*dist(xs, ys, xd, yd), dist(xs, ys, xd, yd)};

    for(int i=1; i<=n; i++){
        for(int j=0; j<con[i].size(); j++){
            auto cur = con[i][j];
            int cur_dist = dist(pos[i].first, pos[i].second, pos[cur.first].first, pos[cur.first].second);
            if(g[i][cur.first].first==0 || g[i][cur.first].first > c[cur.second]*cur_dist){
                g[i][cur.first] = g[cur.first][i] = {c[cur.second]*cur_dist, cur_dist};
            }
        }
    }

    priority_queue<piii> pq; // cost, dist, node#
    pq.push({0, {0,0}});

    vector<int> v(n+2,0), cost(n+2);
    v[0]=1;

    for(int i=1; i<n+2; i++) cost[i]=INF;
    cost[0]=0;

    while(!pq.empty()){
        auto cur=pq.top();
        pq.pop();

        if(cur.first>cost[cur.second.second]) continue;
        if(cur.second.first>=b) continue;

        for(int i=0; i<n+2; i++){
            if(g[cur.second.second][i].first && (!v[i] || cur.first+g[cur.second.second][i].first < cost[i])){
                v[i]=1;
                cost[i]=cur.first+g[cur.second.second][i].first;
                pq.push({cost[i], {cur.second.first+g[cur.second.second][i].second, i}});
            }
        }
    }

    cout << cost[n+1];
    
    return 0;
}