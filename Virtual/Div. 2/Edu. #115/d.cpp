#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100001
#define INF 1e9+7
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define ll long long
using namespace std;

bool cmp(pair<ll,ll> a, pair<ll,ll> b){
    if(a.first==b.first) return a.second<b.second;
    return a.first<b.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int tt;
    cin >> tt;
    while(tt--){
        int n; cin >> n;
        ll ans=1LL*n*(n-1)*(n-2)/6;
        vector<pair<ll,ll>> arr;
        vector<ll> topics, difficulties;
        arr.resize(n);
        topics.resize(n+1,0);
        difficulties.resize(n+1,0);
        for(int i=0; i<n; i++){
            cin >> arr[i].first >> arr[i].second;
            
            topics[arr[i].first]++;
            difficulties[arr[i].second]++;
        }

        sort(arr.begin(), arr.end(), cmp);

        for(int i=0; i<n; i++){
            ll cnt=0;
            for(int j=0; j<topics[arr[i].first]; j++){
                cnt+=difficulties[arr[i+j].second]-1;
            }
            ans-=cnt*(topics[arr[i].first]-1);
            i+=topics[arr[i].first]-1;
        }

        cout << ans << endl;
    }

    return 0;
}