#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100010
#define INF 1e9+7
#define pii pair<int,int>
#define piii pair<int,pair<int,int>>
#define ll long long
using namespace std;

struct a{
    ll val;
    ll cnt;
    priority_queue<piii> pq;
};

bool vis[31][31][31][31]={0,};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int h, w, k; cin >> h >> w >> k;
    a arr[31][31];

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin >> arr[i][j].val;
        }
    }

    queue<int> q_up, q_left;

    arr[0][0].pq.push(arr[0][0].val);
    for(int i=1; i<h; i++){
        arr[i][0].pq.push(arr[i][0].val);
        for(int j=0; j<k; j++){
            if(arr[i-1][0].pq.empty()) break;
            arr[i][0].pq.push(arr[i-1][0].pq.top());
            q_up.push(arr[i-1][0].pq.top());
            arr[i-1][0].pq.pop();
        }
        while(!q_up.empty()){
            arr[i-1][0].pq.push(q_up.front());
            q_up.pop();
        }

        for(int j=0; j<k; j++){
            if(arr[i][0].pq.empty()) break;
            sum+=arr[i][0].pq.top();
            q_up.push(arr[i][0].pq.top());
            arr[i][0].pq.pop();
        }
        while(!q_up.empty()){
            arr[i][0].pq.push(q_up.front());
            q_up.pop();
        }
    }

    for(int j=1; j<w; j++){
        arr[0][j].pq.push(arr[0][j].val);
        for(int j=0; j<k; j++){
            if(arr[0][j-1].pq.empty()) break;
            arr[0][j].pq.push(arr[0][j-1].pq.top());
            q_up.push(arr[0][j-1].pq.top());
            arr[0][j-1].pq.pop();
        }
        while(!q_up.empty()){
            arr[0][j-1].pq.push(q_up.front());
            q_up.pop();
        }
        
        for(int _=0; _<k; _++){
            if(arr[0][j].pq.empty()) break;
            sum+=arr[0][j].pq.top();
            q_up.push(arr[0][j].pq.top());
            arr[0][j].pq.pop();
        }
        while(!q_up.empty()){
            arr[0][j].pq.push(q_up.front());
            q_up.pop();
        }
    }

    for(int i=1; i<h; i++){
        for(int j=1; j<w; j++){
            arr[i][j].pq.push(arr[i][j].val);
            arr[i][j].cnt=0;
            if(arr[i-1][j].sum<arr[i][j-1].sum){
                for(int _=0; _<k; _++){
                    if(arr[i-1][j].pq.empty()) break;
                    arr[i][j].pq.push(arr[i-1][j].pq.top());
                    q_up.push(arr[i-1][j].pq.top());
                    arr[i-1][j].pq.pop();
                }
            }
        }
    }

    ll ans=0;
    for(int i=0; i<k; i++){
        ans+=arr[h-1][w-1].pq.top();
        arr[h-1][w-1].pq.pop();
    }
    
    cout << ans;
    return 0;
}