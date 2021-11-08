#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n,i,flag=0;
    cin >> a >> b >> n;

    a=a*10;
    for(i=0;i<=9;i++){
        if((a+i)%b==0){
            a+=i;
            flag=1;
            break;
        }
    }
    if(flag)
    {
        cout<<a<<string(n-1,'0')<<"\n";
    }
    else
    {
        cout << "-1\n";
    }
    
    return 0;
}