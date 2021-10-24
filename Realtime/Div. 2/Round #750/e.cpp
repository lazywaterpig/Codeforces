#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100010
#define INF 1e9+7
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define ll long long
using namespace std;

int arr[MAX];
int cnt[505]={0};
bool tmp[513]={0};
bool ans[513]={0};
int ansidx[513];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    memset(dp, 0, sizeof(dp));
    memset(vis, 0, sizeof(vis));
    memset(ansidx, -1, sizeof(ansidx));

    int n; cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        cnt[arr[i]]++;
    }

    queue<int> cur;

    for(int i=0; i<n; i++){
        dp[i][0]=true;
    }

    int piv=0;
    while(piv<501 && cnt[piv]==0) piv++;

    for(int i=n-1; i>-1; i--){
        if(arr[i]==piv){
            vis[i]=true;
            ansidx[piv]=i;
        }
    }
    piv++;


    queue<int> res;
    for(int i=0; i<512; i++){
        if(ans[i]!=-1){
        	res.push(i);
        }
    }

    cout << res.size() << endl;
    int sz=res.size();
    for(int i=0; i<sz; i++){
        cout << res.front() << ' ';
        res.pop();
    }

    return 0;
}