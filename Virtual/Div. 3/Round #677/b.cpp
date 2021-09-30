#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--){
        int tmp;
        int n, cnt=0, sum=0, flag=0;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> tmp;
            if(tmp==0 && flag==1){
                cnt++;
            }
            if(tmp==1){
            	flag=1;
                sum+=cnt;
                cnt=0;
            }
        }
        cout << sum << endl;
    }

    return 0;
}