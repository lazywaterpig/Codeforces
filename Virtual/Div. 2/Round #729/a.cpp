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
        int cnt=0;
        int buf;
        for(int i=0; i<n*2; i++){
            cin >> buf;
            if(buf%2==1) cnt++;
        }
        if(cnt==n) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}