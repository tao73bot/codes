#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a=1;
    string s[] = {"Sheldon","Leonard","Penny","Rajesh","Howard"};
    cin >> n;

    while (5*a<n)
    {
        n = n - 5*a;
        a *=2;
    }

    n = (n-1)/a;

    cout <<s[n]<<endl;

    return 0;
}