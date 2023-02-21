#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100001
#define INF 1e9+7
#define x first
#define y second
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int cnt[55]={0};
    
    int tt;
    cin >> tt;
    while(tt--){
        int n, m; cin >> n >> m;
        int arr[3000][2];
        for(int i=0; i<m; i++){
        	cin >> arr[i][0] >> arr[i][1];
        	if(arr[i][0]>arr[i][1]) swap(arr[i][0], arr[i][1]);
        }

        for(int i=1; i<=n; i++) cnt[i]=0;

        if(m==n*(n-1)/2){
            cout << "3\n";
            for(int i=0; i<m; i++){
                if(arr[i][0]==1 && arr[i][1]==2) cout << "3 ";
                else if(arr[i][0]==1) cout << "1 ";
                else if(arr[i][0]==2) cout << "2 ";
                else cout << "3 ";
            }
            cout << '\n';
        }
        else{
            cout << "2\n";
            for(int i=0; i<m; i++){
                cnt[arr[i][0]]++;
                cnt[arr[i][1]]++;
            }
            
            int piv=1;
            while(cnt[piv]==n-1) piv++;

            for(int i=0; i<m; i++){
                if(arr[i][0]==piv || arr[i][1]==piv) cout << "1 ";
                else cout << "2 ";
            }
            cout << '\n';
        }
            
    }

    return 0;
}