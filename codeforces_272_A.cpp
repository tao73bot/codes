#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,ans=0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum+=a[i];
    }
    for(int i=1;i<=5;i++){
        if((sum+i)%(n+1)!=1){
            ans++;
        }
    }
    cout << ans << endl;
    
    return 0;
}