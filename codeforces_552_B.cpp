#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,digits=0,ans=0,x,a;
    cin >> n;

    a = n;
    while (a!=0)
    {
        a/=10;
        digits++;
    }
    
    for(i=digits;i>0;i--){
        if(i==digits){
            ans += (n-round(pow(10,i-1))+1)*i;
        }
        else
        {
            x = round(pow(10,i));
            ans += (x-(x/10))*i;
        }
    }

    cout << ans << endl;

    return 0;
}