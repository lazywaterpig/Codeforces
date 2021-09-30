#include <bits/stdc++.h>
using namespace std;

int arr[200002][2];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int i, j, n;
    int a, b, k;
    cin >> a >> b >> k;
    n=a+b;
    if(k>a+b-2) cout << "NO" << endl;
    else if(k!=0 && a==0) cout << "NO" << endl;
    else if(k!=0 && b==1) cout << "NO" << endl;
    else if(k==0){
        cout << "YES" << endl;
        for(i=0; i<b; i++) cout << '1';
        for(i=0; i<a; i++) cout << '0';
        cout << endl;
        for(i=0; i<b; i++) cout << '1';
        for(i=0; i<a; i++) cout << '0';
        cout << endl;
    }
    else if(k<=a){
        int cnt=0;
        cout << "YES" << endl;
        for(i=0; i<b-1; i++) cout << '1';
        cnt+=b-1;
        cout << '1';
        cnt++;
        for(i=cnt; i<n; i++){
            cnt++;
            cout << '0';
        }
        cout << endl;
        cnt=0;
        for(i=0; i<b-1; i++) cout << '1';
        cnt+=b-1;
        for(i=0; i<k; i++) cout << '0';
        cnt+=k;
        cout << '1';
        cnt++;
        for(i=cnt; i<n; i++){
            cnt++;
            cout << '0';
        }
        cout << endl;
    }
    else{
        int cntone=b-2, cntzero=a-1;
        cout << "YES" << endl;
        arr[0][0]=1;
        arr[0][1]=1;
        arr[1][0]=1;
        arr[1][1]=0;
        arr[1+k][0]=0;
        arr[1+k][1]=1;
        i=2;
        while(i<n){
            if(i!=1+k){
                if(cntone>0){
                    cntone--;
                    arr[i][0]=1;
                    arr[i][1]=1;
                }
                else{
                    cntzero--;
                    arr[i][0]=0;
                    arr[i][1]=0;
                }
            }
            i++;
        }
        for(i=0; i<n; i++) cout << arr[i][0];
        cout << endl;
        for(i=0; i<n; i++) cout << arr[i][1];
        cout << endl;
    }

    return 0;
}