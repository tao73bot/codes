#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,d;
    cin >> n;

    if(n%2==0){
        d=n/2;
        cout << d << "\n";

        while(d--){
            cout << "2 ";
        }
    }
    else{
        d=n/2;
        cout << d << "\n";
        cout << "3 ";
        d--;
        while(d--){
            cout << "2 ";
        }
    }
    cout << "\n";

    return 0;
}