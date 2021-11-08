#include <bits/stdc++.h>
using namespace std;

void prime_L_2_H(long long l, long long h)
{
    int i,j,flag;

    for(i=l;i<=h;i++)
    {
        if(i==1||i==0){
            continue;
        }
        flag=1;

        for(j=2;j*j<=i;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout << i << "\n";
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long l,h;
        cin >> l >> h;

        prime_L_2_H(l,h);
    }
    
    return 0;
}