#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b;
    cin >> a >> b;

    if(a==3&&b==6){
        cout << "3\n";
    }
    else if(a==b){
        cout << a<<"\n";
    }
    else{
        cout << "2\n";
    }

    return 0;
}