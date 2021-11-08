#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long A,B,i,ans=1;
    cin >> A >> B;

    for(i=1;i<=min(A,B);i++){
        ans*=i;
    }

    cout << ans << endl;

    return 0;
}