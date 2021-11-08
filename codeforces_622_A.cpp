#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int i=1,ans=0;
    while (n-i>=0)
    {
        n-=i;
        i++;
        ans++;
    }
    if(n==0){
        cout << ans << endl;
    }
    else
    {
        cout << n << endl;
    }
    
    return 0;
}