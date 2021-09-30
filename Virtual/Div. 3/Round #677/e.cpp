#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    ll ans=1;
    for(int i=1; i<=n; i++) ans*=i; 
    ans/=n;
    ans/=(n/2);
    cout << ans << endl;

    return 0;
}