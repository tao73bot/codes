#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b)
{
    if(a%b==0){
        return b;
    }
    return gcd(b,a%b);
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long a,b,lcm;
        cin >> a >> b;

        if(a==b){
            cout << "1 1" << endl; 
        }
        else
        {
            lcm = (a*b)/gcd(a,b);
            cout << lcm/a << " " << lcm/b << endl;
        }
    }
    
    return 0;
}