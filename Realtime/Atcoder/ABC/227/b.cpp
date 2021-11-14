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

    int n; cin >> n;
    int arr[21];
    for(int i=0; i<n; i++) cin >> arr[i];

    int cnt=0;
    for(int i=0; i<n; i++){
        int flag=0;
        for(int j=1; j<=1000; j++){
            for(int k=1; k<=1000; k++){
                if(4*j*k+3*(j+k)==arr[i]){
                    flag=1;
                    break;
                }
            }
            if(flag) break;
        }

        if(!flag) cnt++;
    }
    cout << cnt;

    return 0;
}