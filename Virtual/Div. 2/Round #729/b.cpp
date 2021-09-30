#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100001
#define INF 1e9+7
#define pii pair<long long,long long>
#define piii pair<pair<int,int>,int>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int tt;
    cin >> tt;
    while(tt--){
        ll n,a,b; cin >> n>>a>>b;
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        pq.push(1);
        int flag=0;
        while(pq.top()<=n && !pq.empty()){
            if((n-pq.top())%b==0){
                flag=1; break;
            }
            if(a!=1 && pq.top()*a<=n) pq.push(pq.top()*a);

            pq.pop();
        }
        if(flag==1) cout << "YES\n";
        else cout << "NO\n";
        
    }

    return 0;
}