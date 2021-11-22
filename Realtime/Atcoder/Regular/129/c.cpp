#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100010
#define INF 1e9+7
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    int tn=n, cnt=0, arr[10], val;
    while(tn){
        val=1;
        while((val+1)*(val+2)/2<=tn) val++;
        arr[cnt]=val;
        cnt++;
        tn-=val*(val+1)/2;
    }

    int arr6[10], dat7[6]={3,2,6,4,5,1};
    for(int i=0; i<cnt-1; i++){
        arr6[i]=arr[i+1]%6;
    }

    int ans[10];
    for(int i=0; i<cnt-1; i++){
        for(int j=1; j<7; j++){
            int flag=0;
            for(int k=0; k<i; k++){
                val=0;
                for(int l=0; l<i-k; l++){
                    val+=ans[k+l];
                    val%=7;
                    if(val==3) val=0;
                    else if(val==2) val=1;
                    else if(val==6) val=2;
                    else if(val==4) val=3;
                    else if(val==5) val=4;
                    else if(val==1) val=5;

                    val+=arr6[l+k];
                    val%=6;
                    val=dat7[val];
                }
                val+=j;
                val%=7;
                if(!val){
                    flag=1;
                    break;
                }
            }
            if(flag) continue;
            ans[i]=j;
            break;
        }
    }
    
    for(int i=0; i<cnt; i++){
        for(int j=0; j<arr[i]; j++) cout << '7';
        if(i!=cnt-1) cout << ans[i];
    }

    return 0;
}