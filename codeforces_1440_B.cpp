#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n,k,i,d,l;
        cin >> n >> k;
        l=n*k;
        long long a[l];
        long long sum=0;

        for(i=0;i<l;i++){
            cin >> a[i];
        }
        if(n%2==0){
            d=(n/2)-1;
        }
        else d=n/2;
        for(i=d;i<l;i+=n){
            sum+=a[i];
        }

        cout << sum << "\n";
    }
    return 0;
}
