#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n, m, k;
int arr[71][71];
bool dp[71][2500];
bool ans[175000], tmp[175000];
vector <vector <int>> v;

void make_linedp(int idx, int sum, int bound, int cnt){
    if(cnt<=(m/2)){
        dp[idx][sum]=true;

        for(int i=idx+1; i<m; i++){
            make_linedp(idx, sum+arr[idx][i], i, cnt+1);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n >> m >> k;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cin >> arr[i][j];
    }
    memset(dp, false, sizeof(dp));
    memset(ans, false, sizeof(ans));

    for(int i=0; i<n; i++) dp[i][0]=true;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) make_linedp(i, arr[i][j], j, 1);
    }
    
    v.resize(n);
    for(int i=0; i<n; i++){
        v.push_back(vector <int> ());
        for(int j=0; j<2500; j++){
            if(dp[i][j]==true) v[i].push_back(j);
        }
    }

    for(int i=0; i<v[0].size(); i++){
        ans(v[0][i])==true; 
    }

    queue <int> q;
    for(int i=1; i<n; i++){
        if(q)
    }

    return 0;
}