#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100010
#define INF 1e9+7
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define ll long long
using namespace std;

bool cmp(pii a, pii b){
    if(a.first==b.first) return a.second<b.second;
    return a.first<b.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    vector<pii> v;
    v.resize(n);
    for(int i=0; i<n; i++) cin >> v[i].first >> v[i].second;
    
    int l=-1, r=1e9+7;
    for(int i=0; i<n; i++){
        if(v[i].first>l) l=v[i].first;
        if(v[i].second<r) r=v[i].second;
        
        if(r>l) cout << "0\n";
        else cout << (l-r+1)/2 << endl;
    }

    return 0;
}