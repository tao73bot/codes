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
        int n,m,i,cnt=0,s1=0,s2=0;
        cin >> n >> m;
        int a[n],b[m];
        for(i=0;i<n;i++){
            cin >> a[i];
            s1+=a[i];
        }
        for(i=0;i<m;i++){
            cin >> b[i];
            s2+=b[i];
        }
        if(s1>s2){
            cout << cnt << "\n";
        }
        else{
            sort(a,a+n);
            sort(b,b+m);
            int mn=min(n,m);
            i=0;
            int j=m-1;
            while(mn--){
                if(s1>s2){
                    break;
                }
                int d=b[j]-a[i];
                s1+=d;
                s2-=d;
                i++;
                j--;
                cnt++;
            }
            if(s1>s2){
                cout << cnt << "\n";
            }
            else{
                cout << "-1\n";
            }
        }
    }
    return 0;
}