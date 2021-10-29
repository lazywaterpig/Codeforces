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
        unsigned long long n, k; cin >> n >> k;
        if(n==1) cout << "0\n";
        else{
            unsigned long long sum=1;
            ll ans=0;
            while(sum<n && sum<k){
                sum*=2;
                ans++;
            }
            ans+=(n-sum+k-1)/k;
            cout << ans << endl;
        }
    }

    return 0;
}