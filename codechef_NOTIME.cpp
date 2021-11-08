#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,i,cnt=0;
    cin >> n >> a >> b;
    int x[n];
    for(i=0;i<n;i++){
        cin >> x[i];
    }
    for(i=0;i<n;i++){
        if(b+x[i]>=a){
            cout << "YES\n";
            break;
        }
        else cnt++;
    }
    if(cnt==n){
        cout << "NO\n";
    }
    return 0;
}