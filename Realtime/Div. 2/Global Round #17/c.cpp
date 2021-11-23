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
        vector<int> a, b;
        a.resize(n);
        b.resize(n);
        for(int i=0; i<n; i++) cin >> a[i] >> b[i];

        int l=1, r=n, ans=0;
        while(l<=r){
            int mid=(l+r)/2;
            int val=0;
            for(int i=0; i<n; i++){
                if(val>=mid) break;
                if(a[i]>=mid-val && b[i]>=val) val++;
            }

            if(val>=mid){
                ans=max(ans,mid);
                l=mid+1;
            }
            else r=mid-1;
        }
        
        cout << ans << endl;
    }

    return 0;
}