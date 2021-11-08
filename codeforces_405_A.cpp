#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,i;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << "\n";
    return 0;
}