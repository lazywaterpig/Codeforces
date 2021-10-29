#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100001
#define INF 1e9+7
#define x first
#define y second
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int tt;
    cin >> tt;
    while(tt--){
        unsigned long long n, k; cin >> n >> k;
        unsigned long long arr[11];
        for(int i=0; i<n; i++) cin >> arr[i];
        unsigned long long ans=0;
        unsigned long long val=1;

        unsigned long long cnt[11]={0};
        for(int i=0; i<n-1; i++){
            val=1;
            for(int j=0; j<arr[i+1]-arr[i]; j++) val*=10;
            cnt[i]=min(k, val-1);
            k-=cnt[i];

            if(i==0 && cnt[i]==val-1){
                cnt[0]--;
                k++;
            }

            if(k==0) break;
        }
        if(k){
            cnt[n-1]=k;
        }

        for(int i=0; i<n; i++){
            val=1;
            for(int j=0; j<arr[i]; j++) val*=10;
            ans+=val*cnt[i];
        }
        ans++;
        cout << ans << endl;
    }

    return 0;
}