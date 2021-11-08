#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define endl '\n'

int main()
{
    SIS;
    int T,c=0;
    cin >> T;

    while (T--)
    {
        int a,b,i,sum=0;
        cin >> a >> b;
        for(i=a;i<=b;i++){
            if(i%2!=0){
                sum = sum + i;
            }
        }

        printf("Case %d: %d\n",++c,sum);
    }

    return 0;
}