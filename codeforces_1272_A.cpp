#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int a[3];
        cin >>a[0]>>a[1]>>a[2];
        int ans;
        sort(a,a+3);

        if(a[2]-a[0]>1){
            a[2]-=1;
            a[0]+=1;
        }
        else if(a[2]-a[0]==1){
            a[0]=a[2];
        }
        ans = max(0,(a[2]-a[0])) * 2;

        cout << ans <<endl;
    }

    return 0;
}