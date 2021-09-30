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
        int n; cin >> n;
        if(n<6) cout << "15\n"
        else{
            if(n%2==1){
                cout << (n+1)/2*5 << endl;
            }
            else cout << n/2*5 << endl;
        }


    }

    return 0;
}