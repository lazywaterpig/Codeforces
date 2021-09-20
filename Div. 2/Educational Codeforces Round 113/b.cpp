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
        int n; cin >> n;
        string ord; cin >> ord;
        int cnt=0;
        vector<int> arr;
        for(int i=0; i<n; i++){
            if(ord[i]=='2'){
                cnt++;
                arr.push_back(i);
            }
        }
        for(int i=0; i<n; i++){
            if(ord[i]=='2'){
                arr.push_back(i);
                break;
            }
        }
        if(cnt==1 || cnt==2) cout << "NO\n";
        else{
            cout << "YES\n";
            if(cnt==0){
                for(int i=0; i<n; i++){
                    for(int j=0; j<n; i++){
                        if(i==j) cout << "X";
                        else cout << "=";
                    }
                    cout << endl;
                }
            }
            else{
                for(int i=0; i<n; i++){
                    for(int j=0; j<n; i++){
                        if(i==j) cout << "X";
                        else if(ord[i]=='1' || ord[j]=='1') cout << "=";
                        else{
                            int piv=0;
                            while(1){
                                if(arr[piv]=i) break;
                                piv++;
                            }
                            if(arr[piv+1]==j) cout << "+";
                            else if(arr[piv-1]==j) cout << "-";
                            else cout << "="
                        }
                    }
                    cout << endl;
                }
            }
        }
        
    }

    return 0;
}