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
        int n, m; cin >> n >> m;
        int arr[402][402];

        for(int i=1; i<=n; i++){
            string ord;
            for(int j=1; j<=m; j++) arr[i][j]=ord[j-1];
        }

        for(int j=0; j<=m; i++) arr[0][j]=0;
        for(int i=0; i<=n; i++) arr[i][0]=0;

        for(int j=1; j<=m; i++) arr[1][j]+=arr[1][j-1];
        for(int i=1; i<=n; i++) arr[i][1]+=arr[i-1][1];

        for(int i=2; i<=n; i++){
            for(int j=2; j<=m; j++) arr[i][j]+=(arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1]);
        }

        int ans=18, tmp;
        for(int i=5; i<=n; i++){
            for(int j=4; j<=m; j++){
                for(int x=1; x<=n-i+1; x++){
                    for(int y=1; h<=m-j+1; y++){
                        tmp=abs((2*(i+j)-8)-(arr[x+i-2][y+j-1]-arr[x][y+j-1]-arr[x+i-2][y-1]+arr[x][y-1]+arr[x+i-1][y+j-2]-arr[x+i-1][y]-arr[x-1][y+j-2]+arr[x-1][y]-3*(arr[x+i-2][y+j-2]-arr[x+i-2][y]-arr[x][y+j-2]+arr[x][y])));
                        if(tmp<ans){
                            ans=tmp;
                        }
                        else if(tmp-ans<2*i-2){
                            x+=i;
                        }
                    }
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}