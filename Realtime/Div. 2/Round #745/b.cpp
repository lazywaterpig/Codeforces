#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100001
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
        unsigned long long n, m, k; cin >> n >> m >> k;
        if(m<n-1) cout << "NO\n";
        else if(m>(n*(n-1))/2) cout << "NO\n";
        else{
            if(n==1){
                if(k<2) cout << "NO\n";
                else cout << "YES\n";
            }
            else if(m==(n*(n-1))/2){
                if(k<3) cout << "NO\n";
                else cout << "YES\n";
            }
            else{
                if(k<4) cout << "NO\n";
                else cout << "YES\n";
            }
        }

    }

    return 0;
}