#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i;
    int digit,k=0,m=0;
    cin >> n;

    for(i=n;i<=1000000000;i++){
        while (i>0)
        {
            digit = i%10;
            i/=10;
            
            if(digit==4){
                k++;
            }
            else if(digit==7){
                m++;
            }    
        }

        if(k==m){
            cout << i << endl;
        }
        
    }

    return 0;
}