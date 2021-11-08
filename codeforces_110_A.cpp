#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    int digit,k=0;
    cin>>n;
    while(n>0)
    {
        digit = n%10;
        n/=10;

        if(digit==4||digit==7){
            k++;
        }

    }
   
    if(k==4||k==7){
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}