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
        int n, m, tmp; cin >> n >> m;
        vector<vector<int>> r, c, ans, res;
        vector<int> v3(n*m+2);
        ans.push_back(v3);
        ans.push_back(v3);

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){ cin >> tmp; ans[0][tmp]=i; }
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){ cin >> tmp; ans[1][tmp]=i; }
        }


        vector<int> v2(m);
        for(int i=0; i<n; i++) res.push_back(v2);

        for(int i=1; i<=n*m; i++){
            res[ans[0][i]][ans[1][i]]=i;
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++) cout << res[i][j] << ' ';
            cout << endl;
        }
    }

    return 0;
}