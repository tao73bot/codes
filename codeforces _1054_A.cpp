#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x,y,z,t1,t2,t3,a,b;
    cin >> x >> y >> z >> t1 >> t2 >> t3;

    a=fabs(x-z)*t2+(fabs(x-y)*t2)+3*t3;
    b=fabs(x-y)*t1;

    if(b<a){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
    }
    return 0;
}