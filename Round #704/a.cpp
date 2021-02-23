#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j,t;
    cin >> t;
    while(t--){
        long long int p,a,b,c;
        cin >> p >> a >> b >> c;
        long long int minv=1000000000000000001;
        if(a-p%a<minv) minv=a-p%a;
        if(b-p%b<minv) minv=b-p%b;
        if(c-p%c<minv) minv=c-p%c;
        if(p%a==0) minv=0;
        if(p%b==0) minv=0;
        if(p%c==0) minv=0;
        cout << minv << endl;
    }

    return 0;
}