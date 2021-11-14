#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100010
#define INF 1e9+7
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define ll long long
using namespace std;

ll arr[200020];
ll h[200020];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll n, k; cin >> n >> k;
    for(int i=0; i<n; i++) cin >> arr[i];

    sort(arr, arr+n);

    h[n-k]=0;
    ll hcnt=1;
    for(int i=n-k+1; i<n; i++){
        h[i]=h[i-1]+hcnt*(arr[i]-arr[i-1]);
        hcnt++;
    }

    ll sum=0;
    for(int i=0; i<n-k; i++){
        sum+=arr[i];
    }

    ll ans=arr[n-k];
    for(int i=n-k+1; i<n; i++){
        if(sum==0) break;
        if(sum<h[i]){
            sum-=h[i-1];
            ans=arr[i-1]+sum/(i-(n-k));
            sum=0;
            break;
        }
    }

    if(sum){
        sum=0;
        for(int i=0; i<n; i++) sum+=arr[i];
        ans=sum/k;
    }

    cout << ans;
    return 0;
}