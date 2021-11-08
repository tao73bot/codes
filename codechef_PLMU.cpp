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
        long long n,i,a=0,b=0,ans;
        cin >> n;
        long long c[n];
        for(i=0;i<n;i++){
            cin >> c[i];
            if(c[i]==2) a++;
            if(c[i]==0) b++;
        }
        ans=(b*(b-1)/2)+(a*(a-1)/2);
        cout << ans << "\n";
    }
    return 0;
}