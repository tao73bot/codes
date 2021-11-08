#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        long long a,b,c,d,e,n;
        cin >> a >> b >> c >> d;

        if(a<=b){
            e = b;
        }
        else if(c<=d){
            e = -1;
        }
        else{
            e = b + ((a-b+c-d-1)/(c-d))*c;
        }
        cout << e << endl;
    }

    return 0;
}