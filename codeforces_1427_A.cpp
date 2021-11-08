#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n,i,s=0;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
            s+=a[i];
        }
        if(s==0){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
            sort(a,a+n);
            if(s>0){
                reverse(a,a+n);
                for(i=0;i<n;i++){
                    cout << a[i] << " ";
                }
            }
            else{
                for(i=0;i<n;i++){
                    cout << a[i] << " ";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}