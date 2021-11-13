#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100010
#define INF 1e9+7
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int tt;
    cin >> tt;
    while(tt--){
        int n; cin >> n;
        vector<int> vis, nodetype;
        vis.resize(n+1);
        nodetype.resize(n+1);
        vector<vector<int>> tree;
        vector<int> t1;
        for(int i=0; i<=n; i++){
            tree.push_back(t1);
            vis[i]=0;
        }
        for(int i=0; i<n-1; i++){
            int a, b; cin >> a >> b;
            tree[a].push_back(b);
            tree[b].push_back(a);
        }

        queue<int> q, q2;
        q.push(1);
        vis[1]=1;
        nodetype[1]=0;
        while(!q.empty()){
            int cur=q.front();
            q.pop();
            for(int i=0; i<tree[cur].size(); i++){
                int next=tree[cur][i];
                if(!vis[next]){
                    vis[next]=1;
                    nodetype[next]=nodetype[cur]^1;
                    q.push(next);
                }
            }
        }

        int cnt=0, stype;
        for(int i=1; i<=n; i++) if(nodetype[i]) cnt++;
        if(cnt>n/2){
            cnt=n-cnt;
            stype=0;
        }
        else stype=1;

		for(int i=0; i<=n; i++) vis[i]=0;
        
        int tmp=cnt, val=0;
        while(tmp>0){
            int tval=1;
            for(int i=0; i<val; i++){
                tval*=2;
            }

            if(tmp%2){
                for(int i=tval; i<tval<<1; i++){
                    q.push(i);
                    vis[i]=1;
                }
            }
            
            val++;
            tmp/=2;
        }

        for(int i=1; i<=n; i++){
            if(!vis[i]) q2.push(i);
        }

        for(int i=1; i<=n; i++){
            if(nodetype[i]==stype){
                nodetype[i]=q.front();
                q.pop();
            }
            else{
                nodetype[i]=q2.front();
                q2.pop();
            }
        }

        for(int i=1; i<=n; i++) cout << nodetype[i] << ' ';
        cout << endl;
    }

    return 0;
}