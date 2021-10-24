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

    int tt;
    cin >> tt;
    while(tt--){
        ll a, b, c; cin >> a >> b >> c;
        c%=2;
        ll g1=0, g2=0;
        g1+=c*3;
        while(b>0 && g1>g2){
            b--;
            g2+=2;
        }
        b%=2;
        if(g1>g2){
            g2+=b*2;
        }
        else g1+=b*2;
        if(g1>g2){
            int t=min(g1-g2,a);
            g2+=t;
            a-=t;
        }
        else{
            int t=min(g2-g1,a);
            g1+=t;
            a-=t;
        }
        a%=2;
        if(g1>g2){
            g2+=a;
        }
        else g1+=a;
        cout << abs(g1-g2) << endl;
    }

    return 0;
}