#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100010
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
        ll n; cin >> n;
        ll arr[61], cnt0=0, cnt1=0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i]==0) cnt0++;
            if(arr[i]==1) cnt1++;
        }

        while(cnt0>0){
            cnt0--;
            cnt1*=2;
        }

        cout << cnt1 << endl;
    }

    return 0;
}