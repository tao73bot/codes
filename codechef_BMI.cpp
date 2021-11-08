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
        long long a,b,c;
        cin >> a >> b;
        c=a/(b*b);
        if(c<=18){
            cout << "1\n";
        }
        if(c>=19&&c<=24) cout << "2\n";
        if(c>=25&&c<=29) cout << "3\n";
        if(c>=30) cout << "4\n";
    }
    return 0;
}