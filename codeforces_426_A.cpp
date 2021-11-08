#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,i,sum=0;
    cin >> n >> s;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);

    for(i=0;i<n-1;i++){
        sum+=a[i];
    }

    if(sum<=s){
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}