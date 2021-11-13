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
        string s; cin >> s;
        vector<int> v;
        for(int i=0; i<n; i++){
            if(s[i]=='a') v.push_back(i);
        }

        if(v.size()<2){
            cout << "-1" << endl;
            continue;
        }

        int ans=1e7;
        for(int i=1; i<v.size(); i++){
            if(v[i]-v[i-1]==1){
                ans=2; break;
            }
            else if(v[i]-v[i-1]==2){
                ans=min(ans, 3);
            }
            else if(v[i]-v[i-1]==3){
                if(s[v[i]-1]!=s[v[i]-2]) ans=min(ans, 4);
            }
        }
        
        if(ans!=1e7){
            cout << ans << endl;
            continue;
        }
        
        for(int i=2; i<v.size(); i++){
            if(v[i]-v[i-1]==3 && v[i-1]-v[i-2]==3){
                int cb=0, cc=0;
                for(int j=v[i-2]; j<v[i]; j++){
                    if(s[j]=='b') cb++;
                    if(s[j]=='c') cc++;
                }
                if(cb==2 && cc==2) ans=7;
            }
        }

        if(ans==1e7) ans=-1;
        cout << ans << endl;
    }

    return 0;
}