#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a,b,c,d;
        long long int mod = 1000000007;
        cin >> a >> b >> c >> d;

        a = a%mod;
        b = b%mod;
        c = c%mod;
        d = d%mod;

        cout << a*b-c*d << endl;
    }
    
    return 0;
}