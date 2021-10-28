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
        int n, m; cin >> n >> m;
        if(n>m){
            cout << "0\n";
            continue;
        }
        m++;

        string n2=bitset<32>(n).to_string(), m2=bitset<32>(m).to_string();
        string ans="";
        if(n2.size()<m2.size()){
            int sz=m2.size()-n2.size();
            for(int i=0; i<sz; i++){
                ans+=m2[i];
            }
        }
        m2=m2.substr(m2.size()-n2.size(), n2.size());
        int flag=0;
        int i=0;
        while(i<n2.size()){
            while(i<n2.size() && !(abs(n2[i]-m2[i]))){
                ans+='0';
                i++;
            }
            if(n2[i]>m2[i]){
                while(i<n2.size()){
                    ans+='0';
                    i++;
                }
            }
            else{
                while(m2[i]>n2[i]){
                    ans+=m2[i];
                    i++;
                }
            }
        }
        int v=1;
        int res=0;
        for(i=ans.size()-1; i>-1; i--){
            res+=v*(ans[i]-48);
            v*=2;
        }
        cout << res << endl;
    }

    return 0;
}