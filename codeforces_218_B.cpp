#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i;
    cin >> n >> m;
    int a[m];

    for(i=0;i<m;i++){
        cin >> a[i];
    }

    sort(a,a+m);
    int s(a[0]),mn(0),k(0);
    for(i=0;i<n;i++){
        mn+=s;
        s--;
        if(s==0){
            s=a[++k];
        }
    }

    sort(a,a+m, greater<int>());
    int mx(0);
    while (n--)
    {
        mx+=a[0];
        a[0]--;
        for(i=1;i<m;++i){
            if(a[i]<=a[i-1]) break;
        }
        swap(a[i],a[i-1]);
    }
    
    cout << mx << " " << mn << endl;

    return 0;
}