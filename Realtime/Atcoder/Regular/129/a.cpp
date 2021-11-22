#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100010
#define INF 1e9+7
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll n, l, r; cin >> n >> l >> r;
    
    ll val=1, ans=0;
    while(n){
        if(n%2){
            if(val>=l && val*2-1<=r) ans+=val;
            else if(val<=l && val*2-1>=r) ans+=r-l+1;
            else if(val>r || val*2-1<l) ans+=0;
            else if(val<l) ans+=val*2-l;
            else if(val*2-1>r) ans+=r-val+1;
        }
        val<<=1;
        n>>=1;
    }
    
    cout << ans;
    return 0;
}