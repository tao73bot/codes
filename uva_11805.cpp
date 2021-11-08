#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,c=0;
    cin >> T;
    while (T--)
    {
        int n,k,p,ans;
        cin >> n >> k >> p;
        if((k+p)%n==0){
            ans=n;
        }
        else
        {
            ans = (k+p)%n;
        }

        printf("Case %d: %d\n",++c,ans);
    }
    
    return 0;
}