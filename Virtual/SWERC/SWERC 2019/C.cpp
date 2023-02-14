#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define pii pair<int, int>
#define piii pair<int, pair<int, int>>
#define MAX 100100
#define INF 1e9+7
using namespace std;

int vis[1000100]={0};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;

    for(int i=0; i<n; i++){
        string s; cin >> s;
        if(s.size()>7 || s[0]=='-') continue;
        else{
            int tmp=stoi(s);
            if(tmp<n) vis[tmp]=1;
        }
    }

    for(int i=0; i<n+1; i++){
        if(!vis[i]){
            cout << i;
            break;
        }
    }



    return 0;
}