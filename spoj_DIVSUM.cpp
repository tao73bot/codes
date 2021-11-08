#include <bits/stdc++.h>
using namespace std;

vector<int> divisors;

void Div(int n)
{
    long long i,sum=0;
    for(i=1;i*i<=n;i++){
        if(i*i==n){
            sum+=i;
        }
        else if(n%i==0&&i*i!=n){
            sum+=i;
            sum+=n/i;
        }
    }
    sum-=n;
    cout << sum << "\n";
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        Div(n);
    }

    return 0;
}