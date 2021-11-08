#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,d,sum=0;
    cin >> n;
    d=n;
    while (n!=0)
    {
        sum+=n%10;
        n/=10;
    }

    if(d%sum==0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}