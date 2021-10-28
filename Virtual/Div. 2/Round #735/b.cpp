#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100001
#define INF 1e9+7
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define ll long long
using namespace std;

ll arr[MAX];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int tt;
    cin >> tt;
    while(tt--){
        ll n, k; cin >> n >> k;
        for(ll i=0; i<n; i++) cin >> arr[i];
        ll ans=-1e8;
        for(ll i=max(0ll,n-2*k-1); i<n; i++){
            for(ll j=i+1; j<n; j++) ans=max(ans, (i+1)*(j+1)-k*(arr[i]|arr[j]));
        }
        cout << ans << endl;
    }

    return 0;
}