#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans=0;
        ans+=10*((n%10)-1);
        if(n>1000) ans+=10;
        else if(n>100) ans+=6;
        else if(n>10) ans+=3;
        else ans+=1;
        cout << ans << endl;
    }

    return 0;
}