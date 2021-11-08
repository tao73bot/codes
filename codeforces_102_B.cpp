#include <bits/stdc++.h>
using namespace std;

int dis_sum(int n)
{
    int s=0;
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int sum=0,i,l,ans=1;
    string s;
    cin >> s;
    l=s.size();
    if(l==1){
        cout << "0\n";
        return 0;
    }
    for(i=0;i<l;i++){
        sum+=(s[i]-'0');
    }
    //d=sum;
    while(sum/10!=0){
        int d=sum;
        sum=dis_sum(d);
        ans++;
    }
    cout << ans << "\n";

    return 0;
}