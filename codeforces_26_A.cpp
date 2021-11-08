#include <bits/stdc++.h>
using namespace std;

vector<int> v;

void primes_1_to_n(int n)
{
    int i,j,flag,s,cnt1=0,cnt2;

    for(i=2;i<=n;i++)
    {
        flag=1;
        for(j=2;j*j<=i;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
            v.push_back(i);
        }
    }
    s=v.size();

    for(i=6;i<=n;i++){
        cnt2=0;
        for(j=0;j<s;j++){
            if(i%v[j]==0){
                cnt2++;
            }
        }
        if(cnt2==2){
            cnt1++;
        }
    }
    cout << cnt1 << endl;
}

int main()
{
    int n;
    cin >> n;

    primes_1_to_n(n);

    return 0;
}