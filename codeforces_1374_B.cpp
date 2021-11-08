#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n,c1=0,c2=0;
        cin >> n;
        while (n%2==0)
        {
            c1++;
            n/=2;
        }
        while (n%3==0)
        {
            c2++;
            n/=3;
        }
        if(n==1 && c1<=c2){
            cout << 2*c2-c1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    
    return 0;
}