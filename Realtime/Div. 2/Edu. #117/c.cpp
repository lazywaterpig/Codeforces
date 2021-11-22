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
        ll k, x; cin >> k >> x;
        if(k*k<=x) cout << 2*k-1 << endl;
        else{
            ll l=0, r=2*k-1, ans=0;
            while(l<=r){
                ll mid=(l+r)/2;
                ll val=0;
                if(mid<=k) val=mid*(mid+1)/2;
                else{
                    val+=k*k;
                    val-=(2*k-1-mid)*(2*k-mid)/2;
                }
                if(val<x){
                    ans=max(ans, mid+1);
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }
            }
            cout << ans << endl;
        }
        
    }

    return 0;
}