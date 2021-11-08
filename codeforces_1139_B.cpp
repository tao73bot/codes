#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,j,sum=0;
    cin >> n;
    long long a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    reverse(a,a+n);
    sum+=a[0];
    for(i=1;i<n;i++){
        if(a[i-1]>a[i]){
            sum+=a[i];
        }
        else{
            if(a[i-1]<=0) sum+=0;
            else sum+=(a[i-1]-1);
            a[i]=a[i-1]-1;
        }
    }
    cout << sum << "\n";
    return 0;
}