#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n,x,a;
        cin >> n >> x;
        
        if(n<=2){
            cout << "1\n";
        }
        else if((n-2)%x==0){
            cout << ((n-2)/x)+1 << endl;
        }
        else{
            cout << ((n-2)/x)+2 << endl;
        }
    }
    return 0;
}