#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n,d,i,cnt=0;
        cin >> n >> d;
        int a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
            if(a[i]<=d) cnt++;
        }
        if(cnt==n){
            cout << "YES\n";
        }
        else{
            sort(a,a+n);
            if(a[0]+a[1]<=d){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}