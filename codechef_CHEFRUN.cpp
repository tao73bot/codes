#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        double a,b,c,x,y,t1,t2;
        cin >> a >> b >> c >> x >> y;

        t1=(c-a)/x;
        t2=(b-c)/y;

        if(t1==t2){
            cout << "Draw\n";
        }
        else if(t1<t2){
            cout << "Chef\n";
        }
        else if(t1>t2){
            cout << "Kefa\n";
        }
    }
    return 0;
}