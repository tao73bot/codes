#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n,d;
        cin >> d >> n;
        while (d--)
        {
            n=n*(n+1)/2;
        }
        cout << n << endl;
    }
    
    return 0;
}