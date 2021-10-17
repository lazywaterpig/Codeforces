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
        int n; cin >> n;
        vector<int> arr;
        arr.resize(n);
        int sum=0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum+=arr[i];
        }
        if(sum%2==0){
            cout << n << endl;
            for(int i=1; i<=n; i++) cout << i << ' ';
            cout << endl;
        }
        else{
            int flag=0;
            for(int i=2; i*i<=sum; i++){
                if(sum%i==0){
                    flag=1; break;
                }
            }
            if(flag==0){
            	int i;
                for(i=0; i<n; i++){
                    if(arr[i]%2!=0) break;
                }
                cout << n-1 << endl;
                for(int j=1; j<=n; j++){
                    if(j-1!=i) cout << j << ' ';
                }
                cout << endl;
            }
            else{
                cout << n << endl;
                for(int i=1; i<=n; i++) cout << i << ' ';
                cout << endl;
            }
        }
        
    }

    return 0;
}