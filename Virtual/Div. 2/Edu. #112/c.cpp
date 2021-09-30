#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100001
#define INF 1e9+7
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define ll long long
using namespace std;

int arr[100002][2];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int tt;
    cin >> tt;
    while(tt--){
        int n; cin >> n;
        for(int i=0; i<=n; i++) arr[i][0]=0;
        for(int i=0; i<=n; i++) arr[i][1]=0;
        for(int i=0; i<n; i++) cin >> arr[i][0];
        for(int i=0; i<n; i++) cin >> arr[i][1];
        if(n!=1){
            for(int i=1; i<n-1; i++) arr[i][1]+=arr[i-1][1];
            for(int i=n-2; i>0; i--) arr[i][0]+=arr[i+1][0];
            int maxv=1e9+7;
            
            for(int i=0; i<n-2; i++){
                int tmp=max(arr[i][1], arr[i+2][0]);
                if(tmp<maxv){
                    maxv=tmp;
                }
            }
            if(maxv>arr[1][0]) maxv=arr[1][0];
            if(maxv>arr[n-2][1]) maxv=arr[n-2][1];
            cout << maxv << endl;
        }
        else cout << "0" << endl;
    }

    return 0;
}