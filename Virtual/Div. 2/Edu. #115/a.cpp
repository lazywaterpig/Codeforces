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
        int n, flag=0; cin >> n;
        string s1, s2; cin >> s1 >> s2;
        for(int i=1; i<n; i++){
            if(s1[i] && s2[i]){
                flag=1;
                break;
            }
        }
        cout << (flag?"NO":"YES") << endl;
    }

    return 0;
}