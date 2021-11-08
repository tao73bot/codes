#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int i;
        string b,a;
        cin >> b;

        a=b.substr(0,2);

        for(i=3;i<=b.size();i+=2){
            a+=b[i];
        }

        cout << a << "\n";
    }
    return 0;
}