#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int k,i,mx=0,ans=0,l;
    cin >> s;
    cin >> k;
    int a[26];
    for(i=0;i<26;i++){
        cin >> a[i];
        mx=max(mx,a[i]);
    }

    l=s.size();
    for(i=0;i<l;i++){
        ans+=(i+1)*(a[s[i]-'a']);
    }
    for(i=l+1;i<=l+k;i++){
        ans+=i*mx;
    }

    cout << ans << "\n";

    return 0;
}