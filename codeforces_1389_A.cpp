#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b)
{
    if(a%b==0)
    {
        return b;
    }
    else
    {
        return gcd(b,a%b);
    }
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long l,r,lcm,c=0;
        cin >> l >> r;
        if(2*l<=r)
        {
            cout << l << " " << 2*l << endl;
        }
        else
        {
            cout << "-1 -1" << endl;
        }
    }
    
    return 0;
}