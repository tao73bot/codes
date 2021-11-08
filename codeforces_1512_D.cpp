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
		ll n,i,sum=0,x,f=0,flag=0;
        cin >> n;
        ll b[n+2];
        for(i=0;i<n+2;i++){
            cin >> b[i];
            sum+=b[i];
        }
        sort(b,b+n+2);
        ll m=b[n+1];
        sum=sum-m;
        for(i=0;i<n+1;i++){
            if((sum-b[i]==m)){
                f=1;
                x=i;
                break;
            }
        }
        if(f==1){
            flag=1;
            for(i=0;i<n+1;i++){
                if(i!=x){
                    cout << b[i] << " ";
                }
            }
        }
        if(f==0){
            ll s=0;
            sum=sum-b[n];
            for(i=0;i<n;i++){
                s+=b[i];
            }
            if(s==b[n]){
                flag=1;
                for(i=0;i<n;i++){
                    cout << b[i] << " ";
                }
            }
        }
        if(flag==0){
            cout << "-1";
        }
        cout << "\n";
    }
	gelo;
}