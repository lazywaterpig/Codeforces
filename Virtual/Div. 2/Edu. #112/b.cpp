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
        int w,h; cin >> w>>h;
        int x1,x2,y1,y2;
        cin >> x1>>y1>>x2>>y2;
        int a,b; cin >> a >> b;
        int X1, X2, Y1, Y2;
        X1=x1;
        X2=w-x2;
        Y1=y1;
        Y2=h-y2;
        int tx=max(X1,X2), ty=max(Y1,Y2);/*
        cout << X1 << ' ' << X2 << endl;
        cout << Y1 << ' ' << Y2 << endl;
        cout << a << b << endl;*/
        if(a>X1+X2 && b>Y1+Y2) cout << "-1\n";
        else{
        	if(a<=tx || b<=ty) cout << "0\n";
            else if(b>Y1+Y2) cout << a-tx << endl;
            else if(a>X1+X2) cout << b-ty << endl;
            else{
                cout << min(a-tx,b-ty) << endl;
            }
        }
    }

    return 0;
}