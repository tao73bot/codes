#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        long long n,cnt=0;
        cin >> n;

        while(n!=1)
        {
            if(n%2==0){
                while(n%2==0){
                    n/=2;
                    cnt++;
                }
            }
            if(n%2!=0&&n%3==0){
                n/=3;
                n*=2;
                cnt++;
            }
            if(n%2!=0&&n%3!=0&&n%5==0){
                n/=5;
                n*=4;
                cnt++;
            }
            if(n%2!=0&&n%3!=0&&n%5!=0&&n!=1){
                cnt=-1;
                break;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}