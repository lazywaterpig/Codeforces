#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100001
#define INF 1e9+7
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define ll long long
using namespace std;

int arr[100100][2];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int tt;
    cin >> tt;
    while(tt--){
        int n; cin >> n;
        if(n%2==0) cout << "No\n";
        else if(n%4==1){
            for(int i=1; i<=n; i++){
                arr[i][0]=i;
                arr[i][1]=2*n+1-i;
            }

            int pos=n/4, pos2=(n/4)+1, tmp;
            //cout << pos << ' ' << pos2 << '\n';
            for(int i=1; i<=n/2; i+=2){
                tmp=arr[pos][1];
                arr[pos][1]=arr[pos2][1];
                arr[pos2][1]=tmp;
                pos--;
                pos2++;
            }

            pos=n-(n/2)+(n/4)-1;
            pos2=n-(n/2)+(n/4)+1;
            //cout << pos << ' ' << pos2 << '\n';
            for(int i=2; i<=n/2; i+=2){
                tmp=arr[pos][1];
                arr[pos][1]=arr[pos2][1];
                arr[pos2][1]=tmp;
                pos--;
                pos2++;
            }

            cout << "Yes\n";
            for(int i=1; i<=n; i++) cout << arr[i][0] << ' ' << arr[i][1] << '\n';
        }
        else{
            for(int i=1; i<=n; i++){
                arr[i][0]=i;
                arr[i][1]=2*n+1-i;
            }

            int pos=n/4+1, pos2=(n/4)+2, tmp;
            //cout << pos << ' ' << pos2 << '\n';
            for(int i=1; i<=n/2; i+=2){
                tmp=arr[pos][1];
                arr[pos][1]=arr[pos2][1];
                arr[pos2][1]=tmp;
                pos--;
                pos2++;
            }

            pos=n-(n/2)+(n/4)-0;
            pos2=n-(n/2)+(n/4)+2;
            //cout << pos << ' ' << pos2 << '\n';
            for(int i=2; i<=n/2; i+=2){
                tmp=arr[pos][1];
                arr[pos][1]=arr[pos2][1];
                arr[pos2][1]=tmp;
                pos--;
                pos2++;
            }

            cout << "Yes\n";
            for(int i=1; i<=n; i++) cout << arr[i][0] << ' ' << arr[i][1] << '\n';
        }
    }

    return 0;
}