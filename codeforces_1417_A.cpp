#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k,i,cnt=0;
        cin >> n >> k;
        int a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        for(i=1;i<n;i++){
            if(a[0]+a[i]<=k){
                while(a[0]+a[i]<=k){
                    a[i]=a[i]+a[0];
                    cnt++;
                }
            }
        }

        cout << cnt << endl;
    }
    
    return 0;
}