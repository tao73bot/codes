#include <bits/stdc++.h>
using namespace std;

int f(int n)
{
    if(n==1) return 0;
    else if(n%2==0&&n%3!=0) return 1+min(f(n/2),f(n-1));
    else if(n%3==0&&n%2!=0) return 1+min(f(n/3),f(n-1));
    else if(n%3==0&&n%2==0) return 1+min(f(n/2),min(f(n/3),f(n-1)));
    return 1+f(n-1);
}

int main()
{
    int T,c=0;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        printf("Case %d: %d\n",++c,f(n));
    }
    return 0;
}