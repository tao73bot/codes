#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,i,f,cnt=0;
    cin >> a >> b;
    for(i=1;i<=a;i++){
        f=i*i+b;
        cnt+=(sqrt(f)-i);
    }
    cout << cnt << endl;

    return 0;
}