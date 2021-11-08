#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        long long A,B,N;
        cin >> A >> B >> N;

        if(N%2==1){
            A=A*2;
        }

        cout << max(A,B)/min(A,B) << endl;
    }

    return 0;
}