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
        int n,i,cnt=0,d,x,y;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
        }
        for(i=0;i<n-1;i++){
            x=max(a[i],a[i+1]);
            y=min(a[i],a[i+1]);
            if(x>2*y){
                d=y;
                while(x>2*d){
                    d*=2;
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
    }
}