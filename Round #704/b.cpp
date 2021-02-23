#include <bits/stdc++.h>
using namespace std;

bool cmp(pair <int,int> a, pair <int,int> b){
    if(a.first==b.first) return a.second>b.second;
    return a.first>b.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int i,j,t;
    cin >> t;
    while(t--){
        int n;
        vector <pair <int,int>> v;
        vector <int> w;
        cin >> n;
        v.resize(n);
        w.resize(n);
        for(i=0; i<n; i++){
            cin >> v[i].first;
            w[i]=v[i].first;
            v[i].second=i;
        }
        sort(v.begin(), v.end(), cmp);
        int bound=n;
        j=0;
        int piv;
        while(bound>0){
            for(i=v[j].second; i<bound; i++) cout << w[i] << ' ';

            bound=v[j].second;
            j++;
        }
        cout << endl;
    }

    return 0;
}