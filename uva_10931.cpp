#include <bits/stdc++.h>
using namespace std;

int parity(int n)
{
    int x=0;
    while (n!=0)
    {
        x+=n%2;
        n/=2;
    }
    
    return x;
}

int main()
{
    long long n;
    while (scanf("%lld",&n)&&n!=0)
    {
        int i=0,p;
        p = parity(n);
        long long a[100];
    while (n>0)
        {
        a[i] = n%2;
        n/=2;
        i++;
    }
    printf("The parity of ");
    for(int j=i-1;j>=0;j--){
            cout <<a[j];
        }
        printf(" is %d (mod 2).\n",p);
    }
    
    return 0;
}