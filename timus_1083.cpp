#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,ans=1;
    string s;
    cin >> n;
    cin >> s;

    k=s.size();
    while(n>=1){
        ans*=n;
        n-=k;
    }
    cout << ans << endl;

    return 0;
}