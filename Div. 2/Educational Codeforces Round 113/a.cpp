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
        string ord;
        cin >> ord;
        int af=-1, bf=-1;
        for(int i=0; i<ord.size(); i++){
            if(af==-1 && ord[i]=='a') af=i;
            if(bf==-1 && ord[i]=='b') bf=i;
        }
        if(af==-1 || bf==-1) cout << "-1 -1" << endl;
        else cout << max(af, bf) << ' ' << max(af,bf)+1 << endl;
    }

    return 0;
}