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
        int n; cin >> n;
        bool arr[1001][5]={0};
        for(int i=0; i<n; i++){
            for(int j=0; j<5; j++) cin >> arr[i][j];
        }
        int cflag=0;
        for(int i=0; i<4; i++){
            for(int j=i+1; j<5; j++){
                
                int cnt1=0, cnt2=0, flag=0;
                for(int k=0; k<n; k++){
                    if(!arr[k][i] && !arr[k][j]){
                        flag=1; break;
                    }

                    if(arr[k][i]) cnt1++;
                    if(arr[k][j]) cnt2++;
                }

                if(flag) continue;

                if(cnt1>=n/2 && cnt2>=n/2){
                    cflag=1;
                    break;
                }
            }
        }

        cout << (cflag?"YES":"NO") << endl;
    }

    return 0;
}