#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin >> n;
    if(n<=2){
        cout << "-1" << endl;
    }
    else
    {
        for(i=n;i>=1;i--){
            cout << i <<" ";
        }
        cout << endl;
    }
    
    return 0;
}