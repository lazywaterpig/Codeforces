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
        ll a, b, x; cin >> a >> b >> x;
        int flag=1;
        for(int i=0; i<5000; i++){
            if(a<x && b<x) break;
            if(a>b && a%b==x%b){
                flag=0; break;
            }
            else if(b%a==x%a){
                flag=0; break;
            }

            if(a>b){
                a=a%b;
            }
            else{
                b=b%a;
            }

            if(!a || !b) break;
        }

        if(flag) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}