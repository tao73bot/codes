#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n,i,cnt=0,d1=0,d2=0;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
            if(a[i]==1){
                if(d1==0){
                    d1=i+1;
                }
                d2=i+1;
            }
        }
        for(i=d1;i<d2;i++){
            if(a[i]==0) cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}