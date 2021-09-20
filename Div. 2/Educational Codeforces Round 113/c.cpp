#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100001
#define INF 1e9+7
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define ull unsigned long long
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
        for(int i=0; i<n; i++) cin >> arr[i];
        int maxv=-1, cnt=0, cnt2=0;
        for(int i=0; i<n; i++){
            if(maxv<arr[i]) maxv=arr[i];
        }
        for(int i=0; i<n; i++){
            if(maxv==arr[i]) cnt++;
        }
        for(int i=0; i<n; i++){
            if(maxv-1==arr[i]) cnt2++;
        }

        if(cnt2==0 && cnt<2) cout << "0\n";
        else{
            int nocnt=1;
            if(cnt==1){
                nocnt=1+cnt2;
            }
            ull val=1;
            for(int i=1; i<=n; i++){
                if(i!=nocnt) val=(val*i)%998244353;
                else if(i==1) continue;
                else val=(val*(i-1))%998244353;
            }
            cout << val << endl;
        }
    }

    return 0;
}