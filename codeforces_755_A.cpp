#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,m,x,c=0;
    cin >> n;
    if(n%2==1){
        cout << 3 << endl;
    }
    else
    {
        for(m=1;m<100;m++){
            x = n*m+1;
            for(i=2;i*i<=x;i++){
                if(x%i==0){
                    cout << m << endl;
                    c++;
                    break;
                }
            }
            if(c==1){
                break;
            }
        }
    }
    
    return 0;
}