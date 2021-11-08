#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x,a,b,d;
        cin >> n >> x >> a >> b;

        if(fabs(a-b)+x>=(n-1)){
            d = n-1;
        }
        else{
            d = fabs(a-b) + x;
        }

        cout << d << endl;
    }
    
    return 0;
}