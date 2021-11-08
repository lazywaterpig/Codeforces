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
        for(int i=0; i<n; i++){
            for(int j=i; j<n-1; j++){
                cout << "(";
            }
            for(int j=0; j<i+1; j++){
                cout << "()";
            }
            for(int j=i; j<n-1; j++){
                cout << ")";
            }
            cout << endl;
        }
    }

    return 0;
}