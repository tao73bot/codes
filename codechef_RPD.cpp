#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,i,j,a[100],mx=0,p;
        cin >> n;
        for(i=0;i<n;i++){
            cin >> a[i];
        }
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                int sum=0;
                p = a[i]*a[j];
                while (p>0)
                {
                    sum+=p%10;
                    p/=10;
                }
                mx = max(mx,sum);
            }
        }
        cout << mx << endl;
    }
    
    return 0;
}