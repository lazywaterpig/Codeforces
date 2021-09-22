#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100001
#define INF 1e9+7
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define ll long long
using namespace std;

vector<piii> v;
int dp[1000010]={0};

bool cmp(piii a, piii b){
    return a.second<b.second;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n,m; cin >> n>>m;
    v.resize(n);
    for(int i=0; i<n; i++){
        cin >> v[i].first.first >> v[i].first.second >> v[i].second;
    }
    sort(v.begin(), v.end(), cmp);

    for(int i=0; i<n; i++){
        
    }

    return 0;
}