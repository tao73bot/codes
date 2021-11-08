#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n,d,i,ans=0,cnt=0,cnt1=0;
        cin >> n >> d;
        int a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
            if(a[i]<=9||a[i]>=80) cnt++;
            else cnt1++;
        }
        if(cnt%d==0){
            ans+=(cnt/d);
        }
        else if(cnt%d!=0) ans+=(cnt/d)+1;
        if(cnt1%d==0){
            ans+=(cnt1/d);
        }
        else ans+=(cnt1/d)+1;
        cout << ans <<"\n";
    }
    return 0;
}