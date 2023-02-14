#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define pii pair<int, int>
#define piii pair<int, pair<int, int>>
#define MAX 100100
#define INF 1e9+7
using namespace std;

int friends[201][201]={0,};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int s, l, n; cin >> s >> l >> n;

    vector<string> animal(s);
    for(int i=0; i<s; i++) cin >> animal[i];
    sort(animal.begin(), animal.end());

//	for(int i=0; i<s; i++) cout << animal[i] << ' ';
//	cout << endl;

    for(int i=0; i<l; i++){
        string a, b; cin >> a >> b;
        int aa, bb;
        for(int j=0; j<s; j++){
            if(a==animal[j]) aa=j;
            if(b==animal[j]) bb=j;
        }
        friends[aa][bb]=1;
        friends[bb][aa]=1;
    }
/*    
    for(int i=0; i<s; i++){
    	for(int j=0; j<s; j++) cout << friends[i][j] << ' ';
    	cout << endl;
    }*/

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        string a; cin >> a;
        for(int j=0; j<s; j++){
            if(a==animal[j]) arr[i]=j;
        }
    }

    for(int _=0; _<6; _++){
        for(int i=0; i<s; i++){
            int piv=-1, flag=1;
            for(int j=0; j<n; j++){
                if(!flag && arr[j]==i){
                    for(int k=j; k>piv; k--) arr[k]=arr[k-1];
                    arr[piv]=i;
                    piv++;
                }
                else{
                    if(!flag){
                        if(friends[i][arr[j]]) continue;
                        else flag=1;
                    }
                    else{
                        if(friends[i][arr[j]] && i<arr[j]){
                            flag=0;
                            piv=j;
                        }
                    }
                }
            }
        }
    }

    for(int i=0; i<n; i++) cout << animal[arr[i]] << ' ';

    return 0;
}