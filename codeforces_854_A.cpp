#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,d;
    cin >> n;
    if(n%2==0){
        d=n/2;
        if(d%2==0){
            a = (n/2)-1;
            b = (n/2)+1;
        }
        else
        {
            a = d-2;
            b = d+2;
        }
    }
    else
    {
        a = n/2;
        b = (n/2)+1;
    }
    
    cout << a <<" "<< b << endl;

    return 0;
}