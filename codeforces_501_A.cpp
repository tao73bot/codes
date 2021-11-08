#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,x,y;
    cin >> a >> b >> c >> d;

    x = max((3*a/10),a-(a*c/250));
    y = max((3*b/10),b-(b*d/250));

    if(x==y){
        cout << "Tie" << endl;
    }
    else if(x>y){
        cout << "Misha" << endl;
    }
    else if(x<y){
        cout << "Vasya" << endl;
    }

    return 0;
}