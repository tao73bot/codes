#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,cnt=0;
    cin >> n >> k;
    while(n--)
    {
        long long x,a=0;
        cin >> x;
        while(x>0){
            if(x%10==4||x%10==7){
                a++;
            }
            x/=10;
        }
        if(a<=k){
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}