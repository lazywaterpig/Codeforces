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
        if(n%2==0) cout << n/2 << ' ' << n/2 << '\n';
        else{
            if((n/2)%10!=9) cout << 1+(n/2) << ' ' << n/2 << '\n';
            else{
                auto s = std::to_string(n);
                int v, a=0, b=0;

                v=0;
                int sz=s.size();
                for(int j=0; j<sz; j+=2){
                    int tmp=std::stoi(s);
                    while(tmp>100) tmp/=10;
                    
                    for(int i=0; i<51; i++){
                    	if((i%10)+(i/10) == ((tmp-i)%10)+((tmp-i)/10)){
                            a*=100;
                            b*=100;
                    		a+=i;
                    		b+=tmp-i;
                    		break;
                    	}
                        else if(v==0 && (i%10)+(i/10)-1 == ((tmp-i)%10)+((tmp-i)/10)){
                            a*=100;
                            b*=100;
                    		a+=i;
                    		b+=tmp-i;
                            v=1;
                    		break;
                        }
                        else if(v==1 && (i%10)+(i/10)+1 == ((tmp-i)%10)+((tmp-i)/10)){
                            a*=100;
                            b*=100;
                    		a+=i;
                    		b+=tmp-i;
                            v=0;
                    		break;
                        }
                    }
                    s = s.substr(2, s.size()-2);
                }

                if(s.size()%2==1){
                    int tmp=n%10;
                    a*=10;
                    b*=10;        
                    if(tmp%2==0){
                        a+=tmp/2;
                        b+=tmp/2;
                    }
                    else if(v==0){
                        a+=1+tmp/2;
                        b+=tmp/2;
                    }
                    else if(v==1){
                        a+=tmp/2;
                        b+=1+tmp/2;
                    }
                }

                cout << a << ' ' << b << '\n';                
            }
        }

    }

    return 0;
}