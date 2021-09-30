#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100001
#define INF 1e9+7
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define ll long long
using namespace std;

bool cmp1(pii a, pii b){
    if(a.first==b.first) return a.second<b.second;
    return a.first<b.first;
}
bool cmp2(pii a, pii b){
    if(a.second==b.second) return a.first<b.first;
    return a.second<b.second;
}

unsigned long long Combination[300002][3] = {};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    Combination[1][0] = 1;    
    Combination[1][1] = 1;
    for (int i = 2; i <= 300000; i++){
        Combination[i][0] = 1;
        for (int j = 1; j <= 2; j++){
            Combination[i][j] = Combination[i - 1][j - 1] + Combination[i - 1][j];
         }
    }

    int tt;
    cin >> tt;
    while(tt--){
        int n,m,k; cin >> n >> m >> k;
        ll cnt=0;
        vector<int> narr, marr;
        vector<pii> karr;
        narr.resize(n);
        marr.resize(m);
        karr.resize(k);
        for(int i=0; i<n; i++) cin >> narr[i];
        for(int i=0; i<m; i++) cin >> marr[i];
        for(int i=0; i<k; i++) cin >> karr[i].first >> karr[i].second;

        sort(karr.begin(), karr.end(), cmp2);
        
        int piv=0;
        for(int i=0; i<m-1; i++){
            priority_queue<int> pq, ncr;
            while(marr[i]==karr[piv].second) piv++;
            while(marr[i]<karr[piv].second && karr[piv].second<marr[i+1]){
                pq.push(karr[piv].first);
                piv++;
            }

            int val=-1, ncrcnt=0, pqsize=pq.size();
            while(!pq.empty()){
                if(val==-1){ val=pq.top(); ncrcnt=1; }
                else{
                    if(val==pq.top()) ncrcnt++;
                    else{
                        val=pq.top();
                        ncr.push(ncrcnt);
                        ncrcnt=1;
                    }
                }
                pq.pop();
            }
            ncr.push(ncrcnt);
            cnt+=Combination[pqsize][2];
            while(!ncr.empty()){
                if(ncr.top()>1) cnt-=Combination[ncr.top()][2];
                ncr.pop();
            }
        }
        
        sort(karr.begin(), karr.end());
        
        piv=0;
        for(int i=0; i<n-1; i++){
            priority_queue<int> pq, ncr;
            while(narr[i]==karr[piv].first) piv++;
            while(narr[i]<karr[piv].first && karr[piv].first<narr[i+1]){
                pq.push(karr[piv].second);
                piv++;
            }

            int val=-1, ncrcnt=0, pqsize=pq.size();
            while(!pq.empty()){
                if(val==-1){ val=pq.top(); ncrcnt=1; }
                else{
                    if(val==pq.top()) ncrcnt++;
                    else{
                        val=pq.top();
                        ncr.push(ncrcnt);
                        ncrcnt=1;
                    }
                }
                pq.pop();
            }
            ncr.push(ncrcnt);
            cnt+=Combination[pqsize][2];
            
            while(!ncr.empty()){
                if(ncr.top()>1) cnt-=Combination[ncr.top()][2];
                ncr.pop();
            }

        }
        cout << cnt << endl;
        
    }

    return 0;
}