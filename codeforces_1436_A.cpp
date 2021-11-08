#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n,i,m,d=0;
        cin >> n >> m;
        int a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
            d+=a[i];
        }
        if(m==d){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}