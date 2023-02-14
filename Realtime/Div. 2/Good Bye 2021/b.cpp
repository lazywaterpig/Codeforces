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
        int n; cin >> n;
        string s; cin >> s;
        char cur=s[0];
        string ans="";
        ans+=s[0];
        if(s[1]>=s[0]){
            cout << ans << ans << endl;
            continue;
        }
        for(int i=1; i<n; i++){
            if(s[i]<=cur){
                ans+=s[i];
                cur=s[i];
            }
            else break;
        }
        cout << ans;
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}