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
        vector<int> v;
        v.resize(n);
        for(int i=0; i<n; i++) cin >> v[i];
        if(n<3){
            cout << "YES\n";
            continue;
        }

        int lpiv=0, rpiv=n-1;
        int val1, val2;
        while(lpiv<rpiv){
            if(v[lpiv]!=v[rpiv]){
                val1=lpiv;
                val2=rpiv;
                break;
            }
            lpiv++;
            rpiv--;
        }

        if(lpiv>=rpiv){
            cout << "YES\n";
            continue;
        }

        while(lpiv<rpiv){
            while(v[lpiv]==v[val1] && lpiv<rpiv) lpiv++;
            while(v[rpiv]==v[val1] && lpiv<rpiv) rpiv--;

            if(lpiv>=rpiv) break;
            if(v[lpiv]!=v[rpiv]) break;
            lpiv++;
            rpiv--;
        }

        if(lpiv>=rpiv){
            cout << "YES\n";
            continue;
        }
        
        lpiv=val1;
        rpiv=val2;
        while(lpiv<rpiv){
            while(v[lpiv]==v[val2] && lpiv<rpiv) lpiv++;
            while(v[rpiv]==v[val2] && lpiv<rpiv) rpiv--;

            if(lpiv>=rpiv) break;
            if(v[lpiv]!=v[rpiv]) break;
            lpiv++;
            rpiv--;
        }

        if(lpiv>=rpiv){
            cout << "YES\n";
        }
        else cout << "NO\n";
        
    }

    return 0;
}