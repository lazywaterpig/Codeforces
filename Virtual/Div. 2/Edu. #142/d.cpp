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
        int n, m, tmp, tmparr[11]; cin >> n >> m;
        vector<string> arr(n), sor(n), invs(n);
        for(int i=0; i<n; i++){
            string s="";
            for(int j=0; j<m; j++){
                cin >> tmp;
                s+=tmp+47;
            }
            arr[i]=s;
        }

        for(int i=0; i<n; i++){
            string s=arr[i];

            for(int j=0; j<m; j++) tmparr[s[j]-48]=j;

            string starget="";
            for(int j=0; j<m; j++) starget+=tmparr[j]+48;

            sor[i]=starget;
        }

        sort(sor.begin(), sor.end());
        
        for(int i=0; i<n; i++){
            string s=arr[i];

            //find string
            int piv=n/2, st=0, e=n-1, flag=0;
            while(st<=e){
                if(s>sor[piv]){
                    st=piv+1;
                    piv=(st+e)/2;
                }
                else if(s<sor[piv]){
                    e=piv-1;
                    piv=(st+e)/2;
                }
                else{
                    flag=1;
                    break;
                }
            }

            if(flag) cout << m << ' ';
            else{
                int ans=0;
                //cout << "=== " << piv << " ===" << endl;
                for(int i=piv-3; i<piv+4; i++){
                    if(i>=0 && i<n){
                        string binsearch=sor[i];
                        int j;
                        for(j=0; j<m; j++){
                            if(binsearch[j]!=s[j]) break;
                        }
                        if(ans<j) ans=j;
                    }
                }
                cout << ans << ' ';
            }
        }
        
        cout << '\n';
    }

    return 0;
}