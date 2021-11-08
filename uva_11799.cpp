#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=0;
    cin >> t;
    while(t--)
    {
        int n,i,ans=0;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
            ans=max(a[i],ans);
        }
        printf("Case %d: %d\n",++c,ans);
    }
    return 0;
}