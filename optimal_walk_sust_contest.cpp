#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long M,N,D;
        cin >> M >> N >> D;

        cout << max(M*D,N*D) << endl;
    }
    
    return 0;
}