#include <bits/stdc++.h>
using namespace std;

char arr[200002][2];
int dp[200002][2];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int i,j,n,m;
    cin >> n >> m;

    for(i=0; i<n; i++) cin >> arr[i][0];
    for(i=0; i<m; i++) cin >> arr[i][1];

    int piv=0;
    for(i=0; i<n-1; i++){
        if(arr[piv][1]==arr[i][0]){
            dp[piv][0]=i;
            piv++;
        }
        if(piv==m) break;
    }
    piv=m-1;
    for(i=n-1; i>0; i--){
        if(arr[piv][1]==arr[i][0]){
            dp[piv][1]=i;
            piv--;
        }
        if(piv==0) break;
    }
    int maxw=0;
    for(i=0; i<m-1; i++){
        if(dp[i+1][1]-dp[i][0]>maxw) maxw=dp[i+1][1]-dp[i][0];
    }
    cout << maxw << endl;
    return 0;
}