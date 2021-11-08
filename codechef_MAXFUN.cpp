#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        long long n,i,s;
        cin >> n;
        long long a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        s=a[n-1]-a[0];
        /*for(i=1;i<n-1;i++){
            d=(a[n-1]-a[i])+(a[i]-a[0]);
            mx=max(mx,d);
        }*/
        cout << 2*s << "\n";
    }
    return 0;
}