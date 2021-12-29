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
        int n; cin >> n;
        int arr[71];
        for(int i=0; i<n; i++) cin >> arr[i];

        if(n<3){
            cout << 0 << endl;
            continue;
        }

        int ans=n-2;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                int cnt=0;
                for(int k=0; k<n; k++){
                    if(arr[i]*(j-i)+(k-i)*(arr[j]-arr[i])==arr[k]*(j-i)) cnt++;
                }
                ans=min(ans, n-cnt);
            }

        }
        
        cout << ans << endl;
    }

    return 0;
}