#include <bits/stdc++.h>
using namespace std;

int arr[303030];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n, maxv=-1;
        cin >> n;
        for(int i=1; i<=n; i++){
            cin >> arr[i];
            if(arr[i]>maxv) maxv=arr[i];
        }
        arr[0]=1234567890;
        arr[n+1]=1234567890;
        int flag=0;
        for(int i=1; i<=n; i++){
            if(arr[i]==maxv && (arr[i-1]<maxv || arr[i+1]<maxv)){
                cout << i << endl;
                flag=1;
                break;
            }
        }

        if(flag==0) cout << "-1\n";
    }

    return 0;
}