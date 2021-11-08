#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n,i,cnt=0;
        cin >> n;
        long long a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        for(i=0;i<n;i++){
            if(a[i]!=a[i+1]){
                cnt++;
            }
        }

        cout << cnt << endl;
    }
    
    return 0;
}