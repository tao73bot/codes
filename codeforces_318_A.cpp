#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,a;
    cin >>n>>k;

    if(n%2==0 && k<=(n/2)){
        a = (2*k) - 1;
    }
    else if(n%2==0 && k>(n/2)){
        a = 2*(k-(n/2));
    }
    else if(n%2!=0 && k<=((n/2)+1)){
        a = (2*k) - 1;
    }
    else if(n%2!=0 && k>((n/2)+1)){
        a = 2*(k-((n/2)+1));
    }

    cout << a << endl;

    return 0;
}