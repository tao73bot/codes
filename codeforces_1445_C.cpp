#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
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
        ll a,b,l,i,ans=INT_MIN;
        cin >> a >> b;
        if(a%b!=0) cout << a << "\n";
        else if(a%b==0){
            for(i=1;i*i<=b;i++){
                if(b%i==0){
                    l=a;
                    if(l%i==0){
                        while(i!=1&&l%i==0){
                            l/=i;
                            if(l%b!=0){
                                ans=max(ans,l);
                                break;
                            }
                        }
                        l=a;
                        while(l%(b/i)==0){
                            l/=(b/i);
                            if(l%b!=0){
                                ans=max(ans,l);
                                break;
                            }
                        }
                    }
                }
            }
            cout << ans << "\n";
        }
    }
    gelo;
}