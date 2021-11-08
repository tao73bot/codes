#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        long long l,r;
        cin >> l >> r;

        if(l==1){
            cout << -1 << endl;
        }
        else if(r>=2*l){
            cout << -1 << endl;
        }
        else{
            cout << r << endl;
        }
    }
    return 0;
}