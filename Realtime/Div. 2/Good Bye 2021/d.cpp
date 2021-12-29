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
        ll n; cin >> n;
        vector<ll> arr, vis;
        arr.resize(n);
        vis.resize(n);
        for(int i=0; i<n; i++) vis[i]=0;
        for(int i=0; i<n; i++) cin >> arr[i];
        ll x; cin >> x;

        vis[0]=1;
        ll sum=arr[0], sumcnt=1;
        for(int i=1; i<n; i++){
            if(vis[i-1]==0){
                vis[i]=1;
                sum=arr[i];
                sumcnt=1;
            }
            else{
                if(arr[i]+sum>=x*(sumcnt+1)){
                    vis[i]=1;
                    sum+=arr[i];
                    sumcnt++;
                    if(arr[i]-x<sum-x*sumcnt){
                        sum=arr[i];
                        sumcnt=1;
                    }
                }
                else{
                    vis[i]=0;
                }
            }
        }
        ll ans=0;
        for(int i=0; i<n; i++) ans+=vis[i];
        cout << ans << endl;
        
    }

    return 0;
}