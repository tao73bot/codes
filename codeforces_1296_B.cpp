#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n,ans=0,a,b;
        cin >> n;
        if(n<10){
            ans=n;
        }
        while (n/10!=0)
        {
            a = (n/10)*10;
            b = n%10;
            ans += a;
            n = (n/10) + b;
            if(n<10){
                ans+=n;
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}