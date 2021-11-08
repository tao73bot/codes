#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        
        if(n%2==0){
            cout << "ALICE\n";
        }
        else{
            cout << "BOB\n";
        }
    }
    return 0;
}