#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long n,k,a;
        cin >> n >> k;

        a=n-n%k;
        a+=min(n%k,k/2);

        cout << a <<"\n";
        /*
        a=n/k;
        if((n-k*a)<=k/2){
            cout << n << "\n";
        }
        else{
            cout << k*a + k/2 <<"\n";
        }*/
    }
    return 0;
}