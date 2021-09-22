#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100001
#define INF 1e9+7
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define ll long long
using namespace std;

int arr[200005][2];
int dp[200005][6]={0,};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n,m; cin >> n >> m;
    string s; cin >> s;
    for(int i=0; i<m; i++) cin >> arr[i][0] >> arr[i][1];
    for(int i=0; i<m; i++) arr[i][0]--;
    for(int i=0; i<m; i++) arr[i][1]--;
    
    for(int i=0; i<n; i++){
        if(i%3==0){
            if(s[i]!='a'){
                dp[i][0]++;
                dp[i][1]++;
            }
            if(s[i]!='b'){
                dp[i][2]++;
                dp[i][3]++;
            }
            if(s[i]!='c'){
                dp[i][4]++;
                dp[i][5]++;
            }
        }
        if(i%3==1){
            if(s[i]!='a'){
                dp[i][2]++;
                dp[i][4]++;
            }
            if(s[i]!='b'){
                dp[i][0]++;
                dp[i][5]++;
            }
            if(s[i]!='c'){
                dp[i][1]++;
                dp[i][3]++;
            }
        }
        if(i%3==2){
            if(s[i]!='a'){
                dp[i][3]++;
                dp[i][5]++;
            }
            if(s[i]!='b'){
                dp[i][1]++;
                dp[i][4]++;
            }
            if(s[i]!='c'){
                dp[i][0]++;
                dp[i][2]++;
            }
        }
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<6; j++){
            dp[i][j]+=dp[i-1][j];
        }
    }
    
    for(int i=0; i<m; i++){
        int minv=1e7;
        for(int j=0; j<6; j++){
            int tmp=dp[arr[i][1]][j];
            if(arr[i][0]!=0) tmp-=dp[arr[i][0]-1][j];
            if(tmp<minv) minv=tmp;
        }
        cout << minv << endl;
    }

    return 0;
}