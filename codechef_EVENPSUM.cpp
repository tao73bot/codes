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
        long long a,b,odd,odd1,even,even1,ans;
        cin >> a >> b;

        if(a%2==0){
            odd=a/2;
            even=a/2;
        }
        if(a%2==1){
            odd=(a/2)+1;
            even=a/2;
        }
        if(b%2==0){
            odd1=b/2;
            even1=b/2;
        }
        if(b%2==1){
            odd1=(b/2)+1;
            even1=b/2;
        }

        ans = (odd*odd1)+(even*even1);
        cout << ans << "\n";
    }
    return 0;
}