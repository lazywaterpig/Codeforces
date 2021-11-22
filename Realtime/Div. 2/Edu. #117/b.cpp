#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100001
#define INF 1e9+7
#define x first
#define y second
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
        int n, a, b; cin >> n >> a >> b;
        if(a>n/2+1 || b<n/2) cout << "-1\n";
        else if(a!=n/2+1 && b==n/2) cout << "-1\n";
        else if(a==n/2+1 && b!=n/2) cout << "-1\n";
        else{
            int ans[101]={0}, piv=0, vis[101]={0}, cnt=2;
            ans[0]=a; vis[a]=1;
            ans[n/2]=b; vis[b]=1;
            //cout << ans[0] << ' ' << ans[1] << endl;
            piv=1;
            for(int i=b+1; i<=n; i++){
                if(i==a) i++;
                if(i>n) break;
                ans[piv]=i;
                vis[i]=1;
                piv++;
                cnt++;
            }
            piv=n/2+1;
            for(int i=a-1; i>0; i--){
                if(i==b) i--;
                if(i<=0) break;
                ans[piv]=i;
                vis[i]=1;
                piv++;
                cnt++;
            }
            piv=0;
            int vispiv=1;
            //cout << ans[0] << ' ' << ans[1] << endl;
            while(cnt<n){
                while(ans[piv]!=0) piv++;
                while(vis[vispiv]==1) vispiv++;
                if(piv>=n) break;
                ans[piv]=vispiv;
                piv++;
                vispiv++;
                cnt++;
            }
            for(int i=0; i<n; i++) cout << ans[i] << ' ';
            cout << endl;
        }
        
    }

    return 0;
}