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

int arr[2002002]={0};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    string s; cin >> s;

    for(int i=0; i<50; i++){
        int cnt=0;
        for(int j=0; j<n+i; j++){
            if(s[j]=='W') cnt++;
        }
        arr[cnt]++;
        int sz=2*n-1-n-i;
        for(int j=0; j<sz; j++){
            if(s[j]=='W') cnt--;
            if(s[j+n+i]=='W') cnt++;
            arr[cnt]++;
        }
    }
    
    int maxv=-1, maxi;
    for(int i=0; i<2*n; i++){
        if(arr[i]>maxv){
            maxv=arr[i];
            maxi=i;
        }
    }

    cout << maxi;
    return 0;
}