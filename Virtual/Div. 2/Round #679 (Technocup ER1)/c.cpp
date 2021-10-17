#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100001
#define INF 1e9+7
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define ll long long
using namespace std;

ll st[6], arr[100002], dp[100002][6][3]={0};
pair<ll, ll> ans[600060];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    for(int i=0; i<6; i++) cin >> st[i];
    sort(st, st+6);
    int n; cin >> n;
    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr, arr+n);

    for(int i=0; i<6; i++){
        for(int j=0)
    }



    return 0;
}