#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100001
#define MOD 1e9+7
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
        
        if(n==1){
            cout << "1\n";
            continue;
        }
        else{
            long long ans=1;
            for(int i=3; i<=2*n; i++){
                ans=(ans*i)%MOD;
            }
            cout << ans << endl;
        }
        


    }

    return 0;
}