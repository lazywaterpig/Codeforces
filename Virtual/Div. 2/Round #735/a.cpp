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
        int n; cin >> n;
        
        ll ans=-1;
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        for(int i=0; i<n-1; i++){
            if(arr[i]*arr[i+1]>ans) ans=arr[i]*arr[i+1];
        }
        cout << ans << endl;
    }

    return 0;
}