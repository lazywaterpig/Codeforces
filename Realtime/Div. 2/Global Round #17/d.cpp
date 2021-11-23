#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100001
#define MOD 1000000007
#define SIZE 4000000
#define x first
#define y second
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define ll long long
using namespace std;

int f[SIZE+1];
int inv[SIZE+1];
void make_com(){
    inv[0] = inv[1] = f[0] = f[1] = 1;
    for (int i = 2; i <=SIZE ; i++)f[i] = 1LL*f[i - 1] * i % MOD;
    for (int i = 2; i <= SIZE ; i++)inv[i] = -1LL * (MOD / i) * inv[MOD % i] % MOD;
    for (int i = 2; i <= SIZE ; i++)inv[i] = 1LL * inv[i - 1] * ((inv[i] + MOD) % MOD) % MOD;
}
int C(int n, int r){return (long long)f[n] * inv[r] % MOD * inv[n - r] % MOD;}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    make_com();

        int n; cin >> n;
        vector<int> v;
        v.resize(n);
        for(int i=0; i<n; i++) cin >> v[i];

        int cnt2[40]={0};
        int cntval=2, cntpiv=1;
        while(cntval<=1e9){
            for(int i=0; i<n; i++){
                if(v[i]%cntval==0) cnt2[cntpiv]++;
            }
            cntval*=2;
            cntpiv++;
        }

        ll ans=1;
        for(int i=0; i<n; i++){
            ans*=2;
            ans%=MOD;
        }
        ans--;
        
    cntval=2, cntpiv=1;

	//for(int i=1; i<15; i++) cout << cnt2[i] << ' ';
	//cout << endl;

    while(cntval<=1e9){
    	if(cnt2[cntpiv]==0) break;
    	
    	if(cnt2[cntpiv]==cnt2[cntpiv+1]){
    		cntval*=2;
    		cntpiv++;
    		continue;
    	}
        ll mval=1;
        for(int i=0; i<cnt2[cntpiv+1]; i++){
            mval*=2;
            mval%=MOD;
        }
		//cout << cnt2[cntpiv] << ' ' << mval << endl;
        vector<ll> ncr;
        ncr.resize(cnt2[cntpiv]-cnt2[cntpiv+1]+2);
        ncr[1]=cnt2[cntpiv]-cnt2[cntpiv+1];
        for(int i=2; i<=cnt2[cntpiv]-cnt2[cntpiv+1]; i++){
            ncr[i]=C(cnt2[cntpiv]-cnt2[cntpiv+1], i);
        }
        for(int i=1; i<=cnt2[cntpiv]-cnt2[cntpiv+1]; i+=2){
            ll cur=ncr[i];
            cur*=mval;
            ans=(ans+MOD-(cur%MOD))%MOD;
        }
        
        //cout << ans << endl;

        cntval*=2;
        cntpiv++;
        if(mval==1) break;
    }
    cout << ans << endl;

    return 0;
}