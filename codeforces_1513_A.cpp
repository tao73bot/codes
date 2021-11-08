#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

khela_shuru
{
	SIS;
	int t;
	cin >> t;
	while(t--)
	{
		ll n,k,i,cnt,x=0,b,c;
		cin >> n >> k;
		if(n%2==0) cnt=(n/2)-1;
		else if(n%2==1) cnt=n/2;

		if(cnt<k){
			cout << "-1";
		}
		else if(cnt>=k){
			if(k==0){
				for(i=1;i<=n;i++){
					cout << i << " ";
				}
			}
			else{
                b=n;
                c=1;
                for(i=1;i<=n;i++){
                    if(i%2==1&&i<2*k){
                        cout << c << " ";
                        c++;
                    }
                    if(i%2==0&&i<2*k){
                        cout << b-x << " ";
                        x++;
                    }
                    if(i>=2*k){
                        cout << b-x << " ";
                        x++;
                    }
                }
			}
		}
		cout << "\n";
	}
	gelo;
}