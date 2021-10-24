#include <bits/stdc++.h>
#define endl "\n"
#define MAX 100010
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
        string s; cin >> s;
        int cnt[26]={0};
        for(int i=0; i<n; i++){
            cnt[s[i]-97]++;
        }

        int l=0, r=n-1, delcnt=0;
        int flag=0;
        while(l<r){
            if(s[l]==s[r]){
                l++;
                r--;
            }
            else{
                flag=1;
                break;
            }
        }

        if(flag==0){
            cout << "0\n";
            continue;
        }

        int minv=1e9;
        int fflag=0;
        for(int i=0; i<26; i++){
            if(cnt[i]>0){
                l=0, r=n-1, delcnt=0;
                flag=0;
                while(l<r){
                    if(s[l]==s[r]){
                        l++;
                        r--;
                    }
                    else if(s[l]-97==i){
                        l++;
                        delcnt++;
                    }
                    else if(s[r]-97==i){
                        r--;
                        delcnt++;
                    }
                    else{
                        flag=1;
                        break;
                    }
                }

                if(flag==0){
                    fflag=1;
                    minv=min(delcnt, minv);
                }
            }
        }
        if(fflag==0) cout << "-1" << endl;
        else cout << minv << endl;
    }

    return 0;
}