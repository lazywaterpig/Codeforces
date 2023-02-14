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

    int tt;
    cin >> tt;
    while(tt--){
        int n, tmp; cin >> n;
        int arr[202]={0};
        for(int i=0; i<n; i++){
            cin >> tmp;
            arr[tmp+100]++;
        }
        int cnt=0;
        if(arr[100]) cnt=1;
        for(int i=99; i>=0; i--){
            if(arr[i]+arr[200-i]>1) cnt+=2;
            else if(arr[i]+arr[200-i]==1) cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}