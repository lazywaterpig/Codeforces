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

    int n, rounds[2]; cin >> n;
    string s; cin >> s;
    for(int i=0; i<n; i++){
        if(s[i]=='+') rounds[0]++;
        else rounds[1]++;
    }

    if(rounds[0]<rounds[1]) swap(rounds[0], rounds[1]);
    
    int tt;
    cin >> tt;
    while(tt--){
        int a, b; cin >> a >> b;
        if(a<b) swap(a, b);
        
        if(a==b && rounds[0]!=rounds[1]){
            cout << "NO\n";
            continue;
        }
        if(a==b && rounds[0]==rounds[1]){
            cout << "YES\n";
            continue;
        }

        int maxv, minv;
        maxv = rounds[0]*a - rounds[1]*b;
        minv = rounds[0]*b - rounds[1]*a;

        if(maxv<0 || minv>0){
            cout << "NO\n";
            continue;
        }
        if(maxv==0 || minv==0){
            cout << "YES\n";
            continue;
        }

        if(maxv % (a-b) == 0) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}