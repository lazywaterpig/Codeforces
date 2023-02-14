#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100001
#define INF 1e9+7
#define x first
#define y second
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    int arr[100], cnt=1;
    arr[0]=2;
    for(int i=3; i<120; i++){
        int flag=0;
        for(int j=2; j<i; i++){
            if(i%j==0) flag=1;
        }
        if(flag==0){
            arr[cnt]=i;
            cnt++;
        }
    }

    cnt=0;
    while(1){
        if(arr[cnt]*arr[cnt+1]>n){
            cout << arr[cnt]*arr[cnt+1];
            break;
        }
        cnt++;
    }

    return 0;
}