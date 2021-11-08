#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,i,cnt=1;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
        }
        if(n==1){
            cout << "YES\n";
        }
        else{
            sort(a,a+n);
            for(i=0;i<n-1;i++){
                if(a[i+1]-a[i]<=1){
                    cnt++;
                }
            }
            if(cnt==n){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}