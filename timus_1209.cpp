#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define mx 100000
set<long long> s;
void solve()
{
    s.insert(0);
    long long i,a;
    for(i=1;i<=mx;i++){
        a=(i+1)*i/2;
        s.insert(a);
    }
}

int main()
{
    SIS;
    solve();
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        if(s.count(n-1)==1){
            cout << "1 ";
        }
        else cout << "0 ";
    }
    return 0;
}