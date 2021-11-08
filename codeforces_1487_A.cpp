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
        int n,cnt=0,i,j;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        reverse(a,a+n);
        for(i=0;i<n-1;i++){
            int d=0;
            for(j=1;j<n;j++){
                if(a[i]>a[j]){
                    d++;
                }
            }
            if(d>0) cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}