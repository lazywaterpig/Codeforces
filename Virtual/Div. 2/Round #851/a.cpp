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
        vector<int> arr(n);

        int cnt=0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i]==2) cnt++;
        }

        if(cnt%2==1) cout << "-1\n";
        else{
            int ccnt=0;
            for(int i=0; i<n; i++){
                if(arr[i]==2) ccnt++;
                if(ccnt*2==cnt){
                    ccnt=i;
                    break;
                }
            }
            cout << ccnt+1 << '\n';
        }
    }   

    return 0;
}