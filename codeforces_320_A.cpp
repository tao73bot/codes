#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    while (n>0)
    {
        if(n%1000==144){
            n/=1000;
        }
        else if(n%100==14){
            n/=100;
        }
        else if(n%10==1){
            n/=10;
        }
        else{
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    
    return 0;
}