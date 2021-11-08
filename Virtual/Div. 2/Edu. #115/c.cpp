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
        vector<int> v;
        v.resize(n);

        ll sum=0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            sum+=v[i];
        }

        double m2=double(sum)*2/n;
        ll m=sum*2/n;
        
        if(abs(m2-m)>0.00001){
        	cout << "0\n";
        	continue;
        }

        sort(v.begin(), v.end());

        vector<pair<ll,ll>> v2;
        int cnt=1, val=v[0];
        for(int i=1; i<n; i++){
            if(v[i]!=v[i-1]){
                v2.push_back({val,cnt});
                cnt=1;
                val=v[i];
            }
            else{
                cnt++;
            }
        }
        v2.push_back({val,cnt});

        int l=0, r=v2.size()-1;
        ll ans=0;

        while(l<r){
            if(v2[l].first+v2[r].first==m){
                ans+=v2[l].second*v2[r].second;
                l++;
                r--;
            }
            else if(v2[l].first+v2[r].first>m) r--;
            else l++;
        }

		
        for(int i=0; i<v2.size(); i++){
            if(v2[i].first*2==m) ans+=v2[i].second*(v2[i].second-1)/2;
        }

        cout << ans << endl;
        
    }

    return 0;
}