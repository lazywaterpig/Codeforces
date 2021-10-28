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
        if(n==1) cout << "a\n";
        else if(n%2){
            n--;
            for(int i=0; i<n/2-1; i++) cout << 'a';
            cout << "bc";
            for(int i=0; i<n/2; i++) cout << 'a';
            cout << endl;
        }
        else{
            for(int i=0; i<n/2-1; i++) cout << 'a';
            cout << 'b';
            for(int i=0; i<n/2; i++) cout << 'a';
            cout << endl;
        }
    }

    return 0;
}