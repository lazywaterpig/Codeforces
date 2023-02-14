#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100001
#define INF 1e9+7
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
        int n, pos, pos2; cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i]==(n+1)/2) pos=i;
            if(arr[i]==1+(n+1)/2) pos2=i;
        }

        if(n%2==1){
            int val=(n+1)/2, lcnt=0, rcnt=0, piv=pos-1;
            while(piv>-1){
                if(arr[piv]==val-1){
                    val--;
                    lcnt++;
                }
                piv--;
            }
            
            piv=pos+1;
            val=(n+1)/2;
            while(piv<n){
                if(arr[piv]==val+1){
                    val++;
                    rcnt++;
                }
                piv++;
            }
            
            cout << n/2 - min(lcnt, rcnt) << '\n';
        }
        else{
            if(pos2<pos) cout << n/2 << '\n';
            else{
                int val=(n+1)/2, lcnt=0, rcnt=0, piv=pos-1;
                while(piv>-1){
                    if(arr[piv]==val-1){
                        val--;
                        lcnt++;
                    }
                    piv--;
                }
                
                piv=pos2+1;
                val=1+(n+1)/2;
                while(piv<n){
                    if(arr[piv]==val+1){
                        val++;
                        rcnt++;
                    }
                    piv++;
                }
                
                cout << n/2 - min(lcnt, rcnt) - 1 << '\n';
            }
        }
    }

    return 0;
}