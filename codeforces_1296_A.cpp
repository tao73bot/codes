#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,i,odd=0,even=0;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
            if(a[i]%2){
                odd++;
            }
            else{
                even++;
            }
        }
        if(odd==0) cout<<"NO\n";
        else if(n%2) cout<<"YES\n";
        else if(even>0) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}