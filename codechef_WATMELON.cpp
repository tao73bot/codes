#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t; while(t--)
    {
        int n,i,sum=0;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
            sum+=a[i];
        }

        if(sum>=0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}