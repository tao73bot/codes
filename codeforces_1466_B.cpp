#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n,i,a;
        set<int> s;
        cin >> n;
        for(i=1;i<=n;i++){
            cin >> a;
            if(s.count(a)){
                a++;
            }
            s.insert(a);
        }
        cout << s.size() << "\n";
    }

    return 0;
}