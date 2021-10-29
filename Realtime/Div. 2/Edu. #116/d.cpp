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
        int n, m; cin >> n >> m;
        vector<vector<int>> arr, maxleft, maxright, minleft, minright;
        vector<int> v2;
        v2.resize(m);

        for(int i=0; i<n; i++){
            arr.push_back(v2);
            maxleft.push_back(v2);
            maxright.push_back(v2);
            minleft.push_back(v2);
            minright.push_back(v2);
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> arr[i][j];
                if(j==0){
                    maxleft[i][0]=arr[i][0];
                    minleft[i][0]=arr[i][0];
                }
                if(j==m-1){
                    maxright[i][m-1]=arr[i][m-1];
                    minright[i][m-1]=arr[i][m-1];
                }
            }
        }

        for(int i=0; i<n; i++){
            for(int j=1; j<m; j++){
                maxleft[i][j]=max(arr[i][j], maxleft[i][j-1]);
                minleft[i][j]=min(arr[i][j], minleft[i][j-1]);
            }
        }
        for(int i=0; i<n; i++){
            for(int j=m-2; j>-1; j--){
                maxright[i][j]=max(arr[i][j], maxright[i][j+1]);
                minright[i][j]=min(arr[i][j], minright[i][j+1]);
            }
        }

        

        vector<int> v3;
        vector<vector<int>> sorted; // n, m inversed matrix
        for(int i=0; i<m; i++){
            v3=vector<int> ();
            v3.resize(n);
            for(int j=0; j<n; j++){
                v3[j]=arr[j][i];
            }
            sort(v3.begin(), v3.end());
            sorted.push_back(v3);
        }



        
    }

    return 0;
}