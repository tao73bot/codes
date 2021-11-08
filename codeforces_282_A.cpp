#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a=0;
    cin >> n;
    string s;
    while (n--)
    {
        cin >> s;
        if(s=="++X"||s=="X++"){
            a++;
        }
        else
        {
            a--;
        }
    }
    cout << a << endl;

    return 0;
}