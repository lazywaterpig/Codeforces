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

    int tt;
    cin >> tt;
    while(tt--){
        int a,b,c; cin >> a >> b >> c;
        int val=a+b+c;
        if(val%3==0) cout << "0" << endl;
        else cout << "1" << endl;
    }

    return 0;
}