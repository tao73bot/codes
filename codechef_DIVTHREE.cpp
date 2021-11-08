#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n,k,d,i,sum=0;
        cin >> n >> k >> d;
        long long a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
            sum+=a[i];
        }
        sum=sum/k;
        if(sum<=d){
            cout << sum << "\n";
        }
        else{
            cout << d << "\n";
        }
    }
    return 0;
}