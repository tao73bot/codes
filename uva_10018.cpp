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
        long long n,sum,r,i,cnt=0;
        cin >> n;
        while(1)
        {
            r=0;
            sum=n;
            while(n!=0)
            {
                r=(n%10)+r*10;
                n/=10;
            }
            if(sum==r){
                break;
            }
            else{
                n=sum+r;
                cnt++;
            }
        }
        cout << cnt << " " << sum << "\n";
    }
    return 0;
}