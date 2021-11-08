#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    if(a%b==0) return b;
    else return gcd(b,a%b);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        long long n,k,g,a,b,i;
        cin >> n >> k;

        if(n%2==1){
            cout << n/2 << " " << n/2 << " 1\n";
        }
        else{
            g=n/2;
            if(g%2==0){
                cout << g << " " << g/2 << " " << g/2 << "\n";
            }
            else{
                a=g-1;
                for(i=a;i>=g/2;i-=2){
                    b=n-(2*a);
                    if(gcd(a,b)==b){
                        cout << a << " " << a << " " << b << "\n";
                        break;
                    }
                }
            }
        }
    }
    return 0;
}