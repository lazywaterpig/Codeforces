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
        int flag=0;
        for(int i=1; i<n; i++){
            if(s[i-1]-48>s[i]-48) flag=1;
        }
        if(flag==0){
            cout << "0" << endl;
            continue;
        }

        cout << "1" << endl;
        
        int pivone=0, pivzero=n-1;
        vector<int> ans;
        while(pivone<pivzero){
            while(!(s[pivone]-48) && pivone<pivzero) pivone++;
            while((s[pivzero]-48) && pivone<pivzero) pivzero--;
            if(pivone==pivzero) break;
            ans.push_back(pivone);
            ans.push_back(pivzero);
            pivone++;
            pivzero--;
        }
        sort(ans.begin(), ans.end());
        cout << ans.size() << ' ';
        for(int i=0; i<ans.size(); i++) cout << ans[i]+1 << ' ';
        cout << endl;
    }

    return 0;
}