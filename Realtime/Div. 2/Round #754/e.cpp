#include <bits/stdc++.h>
#define endl "\n"
#define MAX 2000210
#define INF 1e9+7
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define ll long long
using namespace std;

ll arr[MAX], brr[MAX], qrr[MAX];
ll ans[MAX][2], sum[MAX], sumf[MAX], suml[MAX];
ll res=0;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll n; cin >> n;
    for(int i=1; i<=n; i++) cin >> arr[i];
    for(int i=1; i<=n; i++) cin >> brr[i];

    ll q; cin >> q;
    for(int i=0; i<q; i++) cin >> qrr[i];

    memset(sum, 0, sizeof(sum));
    memset(sumf, 0, sizeof(sumf));
    memset(suml, 0, sizeof(suml));

    for(int i=1; i<=n; i++){
        ans[i][0]=1;
        ans[i][1]=arr[i]-arr[1];
    }
    sum[arr[1]]++;

    for(int i=2; i<=n; i++){
        int a=-ans[i][0], b=brr[i]-ans[i][1];
        for(int j=i*2; j<=n; j+=i){
            ans[j][0]+=a;
            ans[j][1]+=b;
        }
        if(a!=0) sum[abs(b)]++;
        else res+=abs(b);
    }
	
    ll ssum=sum[0];
    for(int i=1; i<=2000000; i++){
        ssum+=sum[i];
    }

    for(int i=1; i<=2000000; i++){
        sumf[i]=sum[i]*i+sumf[i-1];
    }
    for(int i=2000000; i>=0; i--){
        suml[i]=sum[i]*i+suml[i+1];
    }
    for(int i=0; i<2000000; i++){
        sum[i]+=sum[i-1];
    }

    for(int i=0; i<q; i++){
        if(qrr[i]==0){
            cout << res+suml[1]-(ssum-sum[0])*qrr[i] << endl;
        }
        else{
            cout << res+suml[qrr[i]+1]-(ssum-sum[qrr[i]])*qrr[i]+sum[qrr[i]-1]*qrr[i]-sumf[qrr[i]-1] << endl;
        }
    }

    return 0;
}