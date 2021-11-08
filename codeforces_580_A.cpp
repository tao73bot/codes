#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,cnt=1,mx=1;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
        if(i>0){
            if(a[i]>=a[i-1]){
                cnt++;
                mx=max(mx,cnt);
            }
            else{
                cnt=1;
            }
        }
    }
    
    cout << mx << endl;
    
    return 0;
}