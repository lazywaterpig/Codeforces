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

    int tt; cin >> tt;
    while(tt--){
        ll n; cin >> n;
        if(n%9==0 || n%3==1) cout << "TAK" << endl;
        else cout << "NIE" << endl;
    }

    return 0;
}