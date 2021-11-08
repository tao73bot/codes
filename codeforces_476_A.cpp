#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,s;
    cin >> n >> m;

    if(n%2==0){
        s = n/2;
    }
    else
    {
        s = (n/2)+1;
    }
    if(n<m){
        cout << "-1" << endl;
    }
    else if(n>=m){
        while (s%m!=0)
        {
            s++;
        }
        cout << s << endl;
    }

    return 0;
}