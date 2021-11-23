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

        vector<int> red, sum;
        red.resize(n);
        sum.resize(n);
        for(int i=0; i<n-1; i++){
            red[i]=v[i+1]-v[i];
        }

        

    }

    return 0;
}