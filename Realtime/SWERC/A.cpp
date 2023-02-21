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
        vector<int> arr(n);
        for(int i=0; i<n; i++) cin >> arr[i];

        int cnt=0, piv=0;
        for(int i=0; i<n; i++){
            cnt+=(arr[i]-piv)/120;
            piv = arr[i];
        }
        cnt+=(1440-arr[n-1])/120;
        
        if(cnt>1) cout << "YES\n";
        else cout << "NO\n";
        
    }

    return 0;
}