#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100001
#define INF 1e9+7
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define ll unsigned long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int tt;
    cin >> tt;
    while(tt--){
        ll n; cin >> n;
        ll arr[42];
        arr[1]=1;
        arr[2]=2;
        arr[3]=6;
        arr[4]=12;
        arr[5]=arr[4]*5;
        arr[6]=arr[5];
        arr[7]=arr[6]*7;
        arr[8]=arr[7]*2;
        arr[9]=arr[8]*3;
        arr[10]=arr[9]*1;
        arr[11]=arr[10]*11;
        arr[12]=arr[11]*1;
        arr[13]=arr[12]*13;
        arr[14]=arr[13]*1;
        arr[15]=arr[14]*1;
        arr[16]=arr[15]*2;
        arr[17]=arr[16]*17;
        arr[18]=arr[17]*1;
        arr[19]=arr[18]*19;
        arr[20]=arr[19]*1;
        arr[21]=arr[20]*1;
        arr[22]=arr[21]*1;
        arr[23]=arr[22]*23;
        arr[24]=arr[23]*1;
        arr[25]=arr[24]*5;
        arr[26]=arr[25]*1;
        arr[27]=arr[26]*3;
        arr[28]=arr[27]*1;
        arr[29]=arr[28]*29;
        arr[30]=arr[29]*1;
        arr[31]=arr[30]*31;
        arr[32]=arr[31]*2;
        arr[33]=arr[32]*1;
        arr[34]=arr[33]*1;
        arr[35]=arr[34]*1;
        arr[36]=arr[35]*1;
        arr[37]=arr[36]*37;
        arr[38]=arr[37]*1;
        arr[39]=arr[38]*1;
        arr[40]=arr[39]*1;
        arr[41]=arr[40]*41;
        ll cnt=0;
        cnt+=n;
        for(int i=1; i<42; i++){
            cnt+=n/arr[i];
        }
        cout << lldiv(cnt,1e9+7).rem << endl;
    }

    return 0;
}