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
        int n,m; cin >> n >> m;
        int a,b,c;
        vector<int> arr;
        arr.resize(n+1);
        for(int i=1; i<=n; i++) arr[i]=1;
        for(int i=0; i<m; i++){
            cin >> a >> b >> c;
            arr[b]=0;
        }
        int piv;
        for(int i=1; i<=n; i++){
            if(arr[i]==1){
                piv=i;
                break;
            }
        }
        for(int i=1; i<=n; i++){
            if(i!=piv){
                cout << piv << ' ' << i << endl;
            }
        }
    }

    return 0;
}