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

    ll n; cin >> n;
    ll cnt=0;

    for(int i=1; i<=n; i++){
        if(i*i*i>n) break;
        for(int j=i; j<=n; j++){
            if(i*j*j>n) break;
            cnt+=n/(i*j)-(j-1);
        }
    }

    cout << cnt;
    return 0;
}