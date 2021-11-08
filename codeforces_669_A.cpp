#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin >> n;

    if(n%3==0){
        k = (2*n)/3;
    }
    else
    {
        k = 2*(n-n%3)/3 + 1;
    }
    

    cout << k <<endl;

    return 0;
}