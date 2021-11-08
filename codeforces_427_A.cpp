#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,a=0,b=0;
    cin >> n;
    int x[n];
    for(i=0;i<n;i++){
        cin >> x[i];
        if(x[i]<0&&b==0) a++;
        if(x[i]>0) b+=x[i];
        if(x[i]<0&&b>0) b--;
    }
    cout << a << "\n";
}