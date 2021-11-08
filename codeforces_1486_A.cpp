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
        long long n,i,s=0,b,cnt=0;
        cin >> n;
        //d=n*(n-1)/2;
        long long a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
            b=i*(i+1)/2;
            s+=a[i];
            if(s>=b){
                cnt++;
            }
        }
        /*if(s>=d){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }*/
        if(cnt==n){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}