#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,i,sum=0;
    cin >> n >> x;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
        sum+=a[i];
    }

    if(sum>0){
        sum = sum;
    }
    else
    {
        sum = (-1)*sum;
    }
    

    if(sum%x==0){
        cout << sum/x << endl;
    }
    else
    {
        cout << (sum/x) + 1 << endl;
    }
    
    return 0;
}