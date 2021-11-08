#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,x,y,flag,ans;
    cin >> t;
    while(t--)
    {
        int c[1001]={0};
        cin >> x >> y;
        int n;

        for(i=0;i<x;i++){
            cin >> n;

            c[n]++;
        }
        flag=0;

        for(i=0;i<y;i++){
            cin >> n;

            if(c[n]>0 && flag==0){
                flag =1;
                ans=n;
            }
        }

        if(flag==0){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
            cout <<"1 " << ans << "\n";
        }
    }
    return 0;
}