#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a,b,d;
        cin >> a >> b;

        d = fabs(a-b);
        if(d%10==0){
            cout << d/10 << endl;
        }
        else
        {
            cout << (d/10)+1 << endl;
        }
    }
    
    return 0;
}
