#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100010
#define INF 1e9+7
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define ll long long
using namespace std;

int qlist[2*MAX][2];
bool impossible[MAX*10]={0};
int sum[MAX*10]={0};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, m; cin >> n >> m;
    vector<vector<char>> arr;
    vector<char> v;
    v.resize(m);
    for(int i=0; i<n; i++) arr.push_back(v);
    for(int i=0; i<n; i++){
        string ord; cin >> ord;
        for(int j=0; j<m; j++){
            arr[i][j]=ord[j];
        }
    }

    int qu; cin >> qu;
    for(int i=0; i<qu; i++) cin >> qlist[i][0] >> qlist[i][1];

    vector<vector<char>> tmp;
    tmp.push_back(v);
    tmp.push_back(v);
    for(int i=1; i<=m-1; i++){
        for(int j=0; j<2; j++){
            for(int k=0; k<m; k++) tmp[j][k]=arr[i-1+j][k];
        }
        
        queue<pii> q;
        for(int j=0; j<m; j++){
            if(tmp[0][j]=='.'){
                q.push({0,j});
                tmp[0][j]='O';
            }
        }
        if(tmp[1][0]=='.'){
            q.push({1,0});
            tmp[1][0]='O';
        }
        while(!q.empty()){
            pii cur=q.front();
            if(cur.first==0 && tmp[1][cur.second]=='.'){
                q.push({1,cur.second});
                tmp[1][cur.second]='O';
            }
            if(cur.second<m-1 && tmp[cur.first][cur.second+1]=='.'){
                q.push({cur.first,cur.second+1});
                tmp[cur.first][cur.second+1]='O';
            }
            q.pop();
        }
        for(int j=0; j<2; j++){
            for(int k=0; k<m; k++){
                if(tmp[j][k]!='O') tmp[j][k]='X';
            }
        }
        int cnt=0;
        if(tmp[0][0]=='X') cnt++;
        if(tmp[0][1]=='X') cnt++;
        for(int j=1; j<m; j++){
            if(j>=2){
                if(tmp[j-2][0]=='X') cnt--;
                if(tmp[j-2][1]=='X') cnt--;
            }
            if(tmp[j][0]=='X') cnt++;
            if(tmp[j][1]=='X') cnt++;
            if(cnt==4){
                impossible[i]=true;
                break;
            }
        }
    }
    for(int i=1; i<m; i++){
        sum[i]+=sum[i-1];
        if(impossible[i]) sum[i]++;
    }

    for(int i=0; i<qu; i++){
        if(sum[qlist[i][0]-1]!=sum[qlist[i][1]-1]) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}