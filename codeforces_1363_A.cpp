#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x,i,odd=0,even=0,d,m;
        cin >> n >> x;
        int a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
            if(a[i]%2!=0){
                odd++;
            }
            else{
                even++;
            }
        }
        m = min(even,x-1);
        d = x-m;
        if(d%2==0){
            d++;
        }
        if(odd>=d && d<=x){
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    
    return 0;
}