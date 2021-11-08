#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k,ans=0;
        cin >> n >> k;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]>k){
                ans+=(a[i]-k);
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}