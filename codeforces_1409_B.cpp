#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        long long a,b,c,d,n,mn=1000000000000000000,x,y,z,cnt=1;
        cin >> a >> b >> c >> d >> n;

        if(cnt==1){
            if((a-c)>=n){
                x=a-n;
                y=b;
            }
            else{
                x=c;
                if((b-d)>=(n-(a-c))){
                    z=n-(a-c);
                    y=b-z;
                }
                else{
                    y=d;
                }
            }
            mn=min(mn,x*y);
            cnt--;
        }
        if(cnt==0){
            if((b-d)>=n){
                x=b-n;
                y=a;
            }
            else{
                x=d;
                if((a-c)>=(n-(b-d))){
                    z=n-(b-d);
                    y=a-z;
                }
                else{
                    y=c;
                }
            }
            mn=min(mn,x*y);
        }
        cout << mn << "\n";
    }
    return 0;
}