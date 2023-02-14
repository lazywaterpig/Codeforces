#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100001
#define INF 1e9+7
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define ll long long
using namespace std;

int arr[101];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int tt;
    cin >> tt;
    while(tt--){
        int n, cnt=0; cin >> n;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i]==1) cnt++;
        }
        cnt++;
        cout << (n-cnt)+cnt/2 << '\n';
    }

    return 0;
}