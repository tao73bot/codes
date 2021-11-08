#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,i,cnt=0;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
        }
        for(i=1;i<n-1;i++){
            if(a[i]>a[i-1]&&a[i]>a[i+1]){
                cout << "YES" << endl;
                cout << i << " " << i+1 << " " << i+2 << endl;
                break;
            }
            else
            {
                cnt++;
            }
            
        }
        if(cnt==n-2){
            cout << "NO" << endl;
        }
    }
    
    return 0;
}