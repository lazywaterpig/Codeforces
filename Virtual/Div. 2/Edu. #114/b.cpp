#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100001
#define INF 1e9+7
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define ll long long
using namespace std;

ll dragon[200010][2];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll n, sum=0, maxv=-1; cin >> n;
    vector<ll> arr;
    arr.resize(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(maxv<arr[i]) maxv=arr[i];
        sum+=arr[i];
    }
    sort(arr.begin(), arr.end());

    ll m; cin >> m;
    for(int i=0; i<m; i++) cin >> dragon[i][0] >> dragon[i][1];
    for(int i=0; i<m; i++){
        auto piv=lower_bound(arr.begin(), arr.end(), dragon[i][0])-arr.begin();

        if(piv==n || piv==-1){
            cout << dragon[i][0]-arr[n-1]+max(0ll, dragon[i][1]-(sum-arr[n-1])) << endl;
            continue;
        }
        if(piv==0){
            cout << max(0ll, dragon[i][1]-(sum-arr[0])) << endl;
            continue;
        }
        auto piv2=piv-1;
        ll tmp=dragon[i][0]-arr[piv2]+max(0ll, dragon[i][1]-(sum-arr[piv2]));
        ll ans=max(0ll, dragon[i][1]-(sum-arr[piv]));
        cout << min(tmp,ans) << endl;
    }


    return 0;
}