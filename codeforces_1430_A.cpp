#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if(n==1||n==4||n==2){
            cout << -1 << endl;
        }
        if(n==3){
            cout << "1 0 0\n";
        }
        if(n>4){
            if(n%3==0){
                cout << n/3 <<" 0 0\n";
            }
            else if(n%3==1){
                cout << (n-7)/3 << " 0 1\n";
            }
            else{
                cout << (n-5)/3 << " 1 0\n";
            }
        }
    }
    return 0;
}