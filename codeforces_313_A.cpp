#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a[2],b;
    cin >> n;

    b=n;
    if(n>0){
        cout << n << endl;
    }
    else
    {
        for(int i=0;i<2;i++){
            a[i]=b%10;
            b/=10;
        }

        if(a[0]<=a[1]){
            n/=10;
        }
        if(a[0]>a[1]){
            n/=100;
            n*=10;
            n += a[0]; 
        }
        cout << n << endl;
    }

    return 0;
}