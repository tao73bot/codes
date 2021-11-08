#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,i,mx=-100000;
    cin >> n;
    long long a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
        mx=max(mx,a[i]);
        cout << mx << " ";
    }
    cout << "\n";
    return 0;
}