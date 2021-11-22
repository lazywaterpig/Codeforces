#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100010
#define INF 1e9+7
#define x first
#define y second
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define ll long long
using namespace std;

double arr[2*MAX];
int vis[2*MAX];

bool cmp(pair<double,int> a, pair<double,int> b){
    return a.x>b.x;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    vector<pii> v;
    v.resize(n);
    memset(vis, 0, sizeof(vis));
    int mcnt=0;
    for(int i=0; i<n; i++){
        cin >> v[i].x >> v[i].y;
        if(vis[v[i].x]==0) mcnt++;
        vis[v[i].x]=1;
    }

    int ans[41];
    double maxv=-1, maxi;
    for(int num=1; num<min(mcnt+1, 41); num++){
        for(int i=0; i<2*MAX; i++) arr[i]=0.0;

        for(int i=0; i<n; i++){
            if(v[i].y>=num) arr[v[i].x]+=1.0;
            else arr[v[i].x]+=double(v[i].y)/double(num);
        }

        vector<pair<double, int>> s;
        s.resize(2*MAX);
        for(int i=0; i<2*MAX; i++){
            s[i].x=arr[i];
            s[i].y=i;
        }
        sort(s.begin(), s.end(), cmp);
        double curv=0.0;
        for(int i=0; i<num; i++) curv+=s[i].x;
        //cout << num << ": " << curv << endl;
        if(maxv<curv){
            maxv=curv;
            maxi=num;
            for(int i=0; i<num; i++){
                ans[i]=s[i].y;
            }
        }
    }
    
    cout << maxi << endl;
    for(int i=0; i<maxi; i++){
        cout << ans[i] << ' ';
    }

    return 0;
}