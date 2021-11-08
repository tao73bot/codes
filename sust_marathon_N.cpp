#include <bits/stdc++.h>
using namespace std;

double fact(double N)
{
    double res=1;
    for(int i = 2;i<=N;i++){
        res = res*i;
    }

    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double N,ans;
        cin >> N;
        ans = fact(N);

        cout << ans << endl;
    }
    
    return 0;
}