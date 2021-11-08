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
        int n,i,cnt=1,mx=0;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        for(i=0;i<n-1;i++){
            if(a[i]==a[i+1]) cnt++;
            else cnt=1;
            mx=max(mx,cnt);
        }
        cout << n-mx << "\n";
    }
    return 0;
}