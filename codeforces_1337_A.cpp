#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a,b,c,d;
        cin >> a >> b >> c >> d;

        if(a+b>c&&b+c>d){
            cout <<a<<" "<<b<<" "<<c<<endl;
        }
        else if(a+b>c&&b+c>!d){
            cout <<a<<" "<<b<<" "<<c<<endl;
        }
        else if(a+b>!c&&b+c>d){
            cout <<b<<" "<<c<<" "<<d<<endl;
        }
        else if(a+b>!c&&b+c>!d){
            cout <<b<<" "<<c<<" "<<c<<endl;
        }
    }
    
    return 0;
}