#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long x,y,a,b,ans;
        cin >> x >> y;
        cin >> a >> b;

        if(x==y){
            int mx=max(a,b);
            int mn=min(a,b);
            if(2*mn>mx){
                ans=x*mx;
            }
            else{
                ans=x*2*mn;
            }
        }
        if(x>y){
            if(((x-y)*a+y*b)<(x+y)*a){
                ans=(x-y)*a+y*b;
            }
            else{
                ans=(x+y)*a;
            }
        }
        else{
            if(((y-x)*a+x*b)<(x+y)*a){
                ans=(y-x)*a+x*b;
            }
            else{
                ans=(x+y)*a;
            }
        }

        cout << ans << endl;
    }
    return 0;
}