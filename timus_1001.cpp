#include <bits/stdc++.h>
using namespace std;

double a[128*1024];

int main()
{
    unsigned long long A;
    int i=0;
    while (cin >> A)
    {
        a[i++] = (double)sqrt(A*1.0);
    }
    while(i--)
    {
        printf("%.4lf\n",a[i]);
    }
    
    return 0;
}