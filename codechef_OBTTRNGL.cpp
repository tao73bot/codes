#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long k,a,b,mn,mid,ans=0;
        cin >> k >> a >> b;
        mid = k/2;
        if(a<b){
            mn = min(b-a, k-b+a);
        }
        else
        {
            mn = min(a-b, k-a+b);
        }
        if(k%2==0){
            if(mn<mid){
                ans = mn-1;
            }
        }
        if(k%2==1){
            if(mn<mid+1){
                ans = mn-1;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}