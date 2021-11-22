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
        int a, b; cin >> a >> b;
        if((a+b)%2) cout << "-1 -1\n";
        else{
            if(a%2) cout << a/2+1 << ' ' << b/2 << endl;
            else cout << a/2 << ' ' << b/2 << endl;
        }
        
    }

    return 0;
}