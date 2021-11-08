#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,i,c1=0,c2=0,sum=0;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
            if(a[i]==1) c1++;
            if(a[i]==2) c2++;
            sum+=a[i];
        }
        if(sum%2==1){
            cout << "NO\n";
        }
        else if(sum%2==0){
            if(c1==0&&c2%2==1){
                cout << "NO\n";
            }
            else{
                cout << "YES\n";
            }
        }
    }
    return 0;
}