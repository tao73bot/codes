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
        long long n,k;
        cin >> n >> k;

        if(n%k==0){
            cout << "1\n";
        }
        else{
            if(n>k){
                cout << "2\n";
            }
            if(k>n){
                if(k%n==0){
                    cout << k/n << "\n";
                }
                else{
                    cout << (k/n)+1 << "\n";
                }
            }
        }
    }
    return 0;
}