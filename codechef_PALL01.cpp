#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n,r=0,rem,d;
        cin >> n;
        d=n;
        while (n!=0)
        {
            rem=n%10;
            r = r*10+rem;
            n/=10;
        }
        
        if(d==r){
            cout << "wins" << endl;
        }
        else
        {
            cout << "loses" << endl;
        }
    }
    
    return 0;
}