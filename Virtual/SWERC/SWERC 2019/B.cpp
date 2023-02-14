#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define pii pair<int, int>
#define piii pair<int, pair<int, int>>
#define MAX 100100
#define INF 1e9+7
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    vector<string> s(n);
    for(int i=0; i<n; i++) cin >> s[i];
    
    sort(s.begin(), s.end());

    priority_queue<pair<int,string>> pq;

    pair<int,string> cur={1, s[0]};
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1]) cur.first++;
        else{
            pq.push(cur);
            cur={1, s[i]};
        }
    }
    pq.push(cur);
	cur=pq.top();

    if(cur.first>n/2) cout << cur.second;
    else cout << "NONE";

    return 0;
}