#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N,M;

    while (cin >> N >> M)
    {
        if(M==0){
            cout << 1 << endl;
            continue;
        }
        else
        {
            long long P=1;
            for(long long i=N;i>=N-M+1;i--){
                P *= i; 
                while (P%10==0)
                {
                    P/=10;
                }
                P%=1000000000;
            }
            cout << P%10 << endl;
        }
    }
    
    return 0;
}