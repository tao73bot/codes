#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,i;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        int cnt=0,cnt1=0,cnt2=0;
        for(i=0;i<n;i++){
            if(a[i]%2==0){
                cnt1++;
            }
            if(a[i]%2==1){
                cnt2++;
            }
        }
        if(cnt1%2!=cnt2%2){
            cout << "NO\n";
        }
        else{
            if(cnt1%2==0){
                cout << "YES\n";
            }
            else{
                for(i=0;i<n-1;i++){
                    if(a[i+1]-a[i]==1){
                        cnt++;
                    }
                }
                if(cnt>0){
                    cout << "YES\n";
                }
                else{
                    cout << "NO\n";
                }
            }
        }
    }
    return 0;
}