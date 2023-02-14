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
        int a[4];
        for(int i=0; i<4; i++) cin >> a[i];

        if(a[0]==0){
            cout << "1\n";
            continue;
        }

        int cnt=0;
        cnt+=a[0];

        if(a[2]>a[1]) swap(a[1], a[2]);
        cnt+=2*a[2];
        a[1]-=a[2];

        if(a[1]>a[0]){
            cnt+=a[0];
            cout << cnt+1 << '\n';
            continue;
        }
        
        cnt+=a[1];
        a[0]-=a[1];
        if(a[0]<a[3]) cout << cnt+a[0]+1 << '\n';
        else cout << cnt+a[3] << '\n';
    }

    return 0;
}