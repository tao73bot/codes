#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    n--;
    cout << (n/3)*2+n%3 << "\n";
    return 0;
}