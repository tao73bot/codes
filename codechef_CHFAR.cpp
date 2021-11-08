#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,cnt=0,i;
        cin >> n >> k;
        int a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
            if(a[i]>1){
                cnt++;
            }
        }
        if(cnt<=k){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}