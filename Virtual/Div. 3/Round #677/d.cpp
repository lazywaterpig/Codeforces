#include <bits/stdc++.h>
using namespace std;

bool cmp(pair <int,int> a, pair <int,int> b){
	return a.second<b.second;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--){
        
        int i, n, idx;
        cin >> n;
    
        vector <pair<int,int>> point(n);
        vector <int> ans(n);
    
        for(i=0; i<n; i++){
            cin >> point[i].first;
            point[i].second=i;
        }
    
        sort(point.begin(), point.end());
    
	    int pcomp=0;
	    for(i=0; i<n; i++){
		    int tmp=pcomp;
		    idx=point[i].second;
		
		    ans[idx]=tmp;
		    pcomp++;
		
		    while(i<n && point[i].first==point[i+1].first){
			    ++i;
			    idx=point[i].second;
			    ans[idx]=tmp;
		    }
	    }

        int cnt[5001], piv[5001];
        memset(cnt, 0, sizeof(cnt));
        memset(piv, -1, sizeof(piv));
        
        for(i=0; i<n; i++){
            cnt[ans[i]]++;
            if(piv[ans[i]]==-1) piv[ans[i]]=i;
        }

        int flag=0;
        for(i=0; i<n; i++){
            if(cnt[i]==n){
                cout << "NO\n";
                flag=1;
                break;
            }
        }

        if(flag==0){
            cout << "YES\n";
            int maxi=0, maxi2=n, tmpn=n;
            int tmaxi, tmaxv;
            for(i=0; i<n; i++){
                if(cnt[i]>cnt[maxi]){
                	maxi2=maxi;
                	maxi=i;
                }
                else if(cnt[i]>cnt[maxi2] && i!=maxi) maxi2=i;
            }
            while(cnt[maxi]>cnt[maxi2]){
            	cout << piv[maxi2]+1 << ' ' << piv[maxi]+1 << '\n';
                cnt[maxi]--;
                piv[maxi]++;
                while(piv[maxi]<=n && ans[piv[maxi]]!=maxi) piv[maxi]++;
                tmpn--;
            }
            
            maxi=0;
            for(i=0; i<n; i++){
                if(cnt[i]>cnt[maxi]) maxi=i;
            }

            for(i=0; i<tmpn-1; i++){
                cout << piv[maxi]+1 << ' ';
                cnt[maxi]--;
                piv[maxi]++;
                while(piv[maxi]<=n && ans[piv[maxi]]!=maxi) piv[maxi]++;

                tmaxv=-1;
                for(int j=0; j<n; j++){
                    if(j!=maxi && cnt[j]>tmaxv){
                        tmaxi=j;
                        tmaxv=cnt[j];
                    }
                }
                cout << piv[tmaxi]+1 << '\n';
                maxi=tmaxi;
            }
        }
    }

    return 0;
}