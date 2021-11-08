#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=0;
    cin >> t;
    while (t--)
    {
        int l,k,ans,n;
        cin >> l >> k;
        n = l-k+1;
        if(n<=0){
            ans = 0;
        }
        else
        {
            ans = n*(n+1)/2;
        }
        
        cout <<"Case "<< ++c <<": "<< ans << endl;
    }
    
    return 0;
}