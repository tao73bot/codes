#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,i;
        cin >> n;
        long long a[n],sum=0,d;
        
        for(i=0;i<n;i++){
            cin >> a[i];
            sum+=a[i];
        }
        if(sum%n==0){
            d = sum/n;
        }
        else
        {
            d = (sum/n) + 1;
        }
        cout << d << endl;
    }
    
    return 0;
}