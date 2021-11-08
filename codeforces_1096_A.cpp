#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        long long a,b,i,j;
        cin >> a >> b;
        
        if(b-a>=a){
            cout << a <<" "<<2*a<<endl;
        }
        else{
            for(i=a;i<=a+(b-a)/2;i++){
                for(j=a+2;j<=b;j++){
                    if(j%i==0){
                        cout << i << " "<<j<< endl;\
                        break;
                    }
                }
                break;
            }
        }
    }
    
    return 0;
}