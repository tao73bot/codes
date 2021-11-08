#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int H,P;
        cin >> H >> P;

        if(H>=P*2){
            cout << "0" << endl;
        }
        else
        {
            cout << "1" << endl;
        }
    }
    
    return 0;
}