#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int X;
        cin >> X;
        if(X%5==0 && X%10==0){
            cout << "0" << endl;
        }
        else if(X%5==0 && X%10!=0){
            cout << "1" << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
        
    }
    
    return 0;
}