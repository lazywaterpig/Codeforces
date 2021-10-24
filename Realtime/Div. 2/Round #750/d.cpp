#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100010
#define INF 1e9+7
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define ll long long
using namespace std;

int arr[MAX];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int tt;
    cin >> tt;
    while(tt--){
        int n; cin >> n;
        memset(arr, 0, sizeof(arr));
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        if(n%2){
            for(int i=0; i<n-3; i+=2){
                cout << arr[i+1] << ' ';
                cout << arr[i]*-1 << ' ';
            }

            if(arr[n-3]+arr[n-1]==0){
                cout << arr[n-2]+1+(arr[n-2]==-1?1:0) << ' ';
                cout << arr[n-3]*-1 << ' ';
                cout << 1+(arr[n-2]==-1?1:0) << ' ';
            }
            else{
                cout << arr[n-2] << ' ';
                cout << (arr[n-3]+arr[n-1])*-1 << ' ';
                cout << arr[n-2] << ' ';
            }
        }
        else{
            for(int i=0; i<n; i+=2){
                cout << arr[i+1] << ' ';
                cout << arr[i]*-1 << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}