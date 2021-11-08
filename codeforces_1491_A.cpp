#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define khela_shuru int main()
#define gelo return 0

khela_shuru
{
    SIS;
    int n,q,i,cnt=0;
    cin >> n >> q;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
        cnt+=a[i];
    }
    while (q--)
    {
        int b,c;
        cin >> b >> c;
        if(b==1)
        {
            if(a[c-1]==1) cnt--;
            if(a[c-1]==0) cnt++;
            a[c-1]=1-a[c-1];
        }
        if(b==2)
        {
            if(cnt>=c) cout << "1\n";
            else cout << "0\n";
        }
    }
    gelo;
}