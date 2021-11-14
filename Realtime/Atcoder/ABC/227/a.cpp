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

    int n, k; cin >> n >> k;
    int a; cin >> a;

    cout << ((k+a-1)%n?(k+a-1)%n:n);

    return 0;
}