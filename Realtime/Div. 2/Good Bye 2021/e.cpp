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
        int n, flag=0; cin >> n;
        string s, t; cin >> s >> t;
        if(s<t){
            cout << 0 << endl;
            continue;
        }
        int scnt[27]={0}, tcnt[27]={0};
        queue<int> sq[26];
        for(int i=0; i<n; i++){
            scnt[s[i]-97]++;
            tcnt[t[i]-97]++;
            sq[s[i]-97]
        }
        for(int i=0; i<n; i++){
            if(scnt[i]>tcnt[i]) break;
            if(scnt[i]<tcnt[i]){
                flag=1;
                break;
            }
        }
        if(flag){
            cout << -1 << endl;
            continue;
        }

        
    }

    return 0;
}