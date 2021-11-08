#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n,x,i,cnt=0;
        cin >> n >> x;
        int a[n],b[n];
        for(i=0;i<n;i++){
            cin >> a[i];
        }
        for(i=0;i<n;i++){
            cin >> b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        reverse(b,b+n);
        /*for(i=0;i<n;i++){
            cout << b[i]<<" ";
        }
        cout << "\n";*/
        for(i=0;i<n;i++){
            if(a[i]+b[i]>x){
                cnt++;
            }
        }
        if(cnt>0){
            cout << "No\n";
        }
        else{
            cout << "Yes\n";
        }
    }
    return 0;
}