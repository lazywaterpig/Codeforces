#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100001
#define INF 1e9+7
#define x first
#define y second
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
        string s; cin >> s;
        if(s[0]==s[s.size()-1]) cout << s;
        else{
            if(s[0]=='a'){
                cout << 'b';
                for(int i=1; i<s.size(); i++) cout << s[i];
            }
            else{
                for(int i=0; i<s.size()-1; i++) cout << s[i];
                cout << 'b';
            }
        }
        cout << endl;
    }

    return 0;
}