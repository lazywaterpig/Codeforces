#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100001
#define INF 1e9+7
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define ll long long
using namespace std;

char dat[MAX];
int dat2[MAX];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    int bound=-1, sz, flag=0;
    stack<int> s, ans;
    for(int i=0; i<2*n; i++){
        cin >> dat[i];
        if(dat[i]=='-') cin >> dat2[i];
    }

    for(int i=2*n-1; i>-1; i--){
        if(dat[i]=='-'){
            if(!s.empty() && s.top()<dat2[i]) flag=1;
            s.push(dat2[i]);
        }
        else{
            if(s.empty()) flag=1;
            else{
                ans.push(s.top());
                s.pop();
            }
        }
    }

    if(flag) cout << "NO";
    else{
        cout << "YES\n";
        while(!ans.empty()){
            cout << ans.top() << ' ';
            ans.pop();
        }
    }
    return 0;
}