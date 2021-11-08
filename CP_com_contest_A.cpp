#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long l,i,sum=0,p=1;
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    l=s.size();

    for(i=3;i<l;i++){
        sum+=(s[i]-'0')*p;
        p*=10;
    }
    sum+=1;

    cout << sum << "ffy\n";

    return 0;
}