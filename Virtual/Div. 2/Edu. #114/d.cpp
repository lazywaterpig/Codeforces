#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100001
#define INF 1e9+7
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define ll long long
using namespace std;

int n; 
int cnt[10];
int arr[10][100010];

struct b{
    int val;
    int blist[10];
};

struct compare{
    bool operator()(const b& b1, const b& b2){
        if(b1.val==b2.val){
            for(int i=0; i<n; i++){
                if(b1.blist[i]==b2.blist[i]) continue;
                return b1.blist[i]<b2.blist[i];
            }
        }
        return b1.val<b2.val;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n;
    int sum=0;
    for(int i=0; i<n; i++){
        cin >> cnt[i];
        for(int j=0; j<cnt[i]; j++) cin >> arr[i][j];
    }

    int m; cin >> m;
    priority_queue<b, vector<b>, compare> mlist;
    for(int i=0; i<m; i++){
        int tot=0;
        b ttmp;
        for(int j=0; j<n; j++){
            cin >> ttmp.blist[j];
            ttmp.blist[j]--;
            tot+=arr[j][ttmp.blist[j]];
        }
        ttmp.val=tot;
        mlist.push(ttmp);
    }
    
    for(int i=0; i<n; i++){
        sum+=arr[i][cnt[i]-1];
    }

    priority_queue<b, vector<b>, compare> pq, pqres;
    b tmp;
    for(int i=0; i<n; i++){
        tmp.blist[i]=cnt[i]-1;
    }
    tmp.val=sum;
    pq.push(tmp);

    for(int i=0; i<100001; i++){
        if(pq.empty()) break;

        tmp=pq.top();
        pqres.push(tmp);
        pq.pop();

        for(int j=0; j<n; j++){
            if(tmp.blist[j]==0) continue;

            b ttmp;
            ttmp.val=tmp.val-arr[j][tmp.blist[j]]+arr[j][tmp.blist[j]-1];
            ttmp.blist[j]=tmp.blist[j]-1;
            for(int k=0; k<n; k++){
                if(k!=j){
                    ttmp.blist[k]=tmp.blist[k];
                }
            }
            pq.push(ttmp);
        }
    }

   while(!pqres.empty()){
        if(mlist.empty()) break;

        int flag=0;
        if(pqres.top().val!=mlist.top().val) flag=1;
        for(int j=0; j<n; j++){
            if(pqres.top().blist[j]!=mlist.top().blist[j]) flag=1;
        }
        if(flag) break;
        tmp=pqres.top();
        pqres.pop();
        while(1){
        	int pflag=0;
        	if(pqres.top().val!=tmp.val) pflag=1;
        	for(int j=0; j<n; j++){
        		if(pqres.top().blist[j]!=tmp.blist[j]) pflag=1;
        	}
        	if(pflag) break;
        	pqres.pop();
        }
        mlist.pop();
    }
    
    for(int i=0; i<n; i++) cout << pqres.top().blist[i]+1 << ' ';
    return 0;
}