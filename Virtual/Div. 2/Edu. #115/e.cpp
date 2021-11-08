#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100001
#define INF 1e9+7
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define ll long long
using namespace std;

int n, m, q;
int arr[1002][1002][2];
int query[10002][2];

bool oob(int a, int b){
    return !(0<=a && a<n && 0<=b && b<m);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    cin >> n >> m >> q;
    for(int i=0; i<q; i++) cin >> query[i][0] >> query[i][1];

    memset(arr, 0, sizeof(arr));
    int r=n-1, c=m-1;
    while(r>-1 && c>-1){
        arr[r][c]=4*(n-1-r)+1;
        r--; c--;
    }

    ll cnt=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i-j!=n-m){
                arr[i][j]=min((oob(0,i-n+m)?1e8:arr[i][i-n+m]+1), (oob(j+n-m,0)?1e8:arr[j+n-m][j]+1));
            }
            cnt+=arr[i][j];
            //cout << arr[i][j] << ' ';
        }
        //cout << endl;
    }

    for(int i=0; i<q; i++){
        
    }


    return 0;
}