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
        int n; cin >> n;
        int arr[101];
        for(int i=0; i<n; i++) cin >> arr[i];
        for(int i=0; i<n/2; i++) cout << arr[2*i+1] << ' ' << arr[2*i]*-1 << ' ';
        cout << endl;
    }

    return 0;
}