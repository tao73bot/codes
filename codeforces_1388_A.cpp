#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if(n>30){
            if(n==36||n==40||n==44){
                cout << "YES\n";
                cout << "6 10 15 "<< n-31 << endl; 
            }
            else{
                cout << "YES\n";
                cout << "6 10 14 "<< n-30 << endl;
            }
        }    
        else
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}