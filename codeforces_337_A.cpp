#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,d,mn=1001;
    cin >> n >> m;
    int a[m];
    for(i=0;i<m;i++){
        cin >> a[i];
    }
    sort(a,a+m);
    for(i=0;i<m;i++){
        if(i+n-1==m){
            break;
        }
        d = a[i+n-1]-a[i];
        mn = min(mn,d);
    }
    cout << mn << endl;

    return 0;
}