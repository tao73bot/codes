#include <bits/stdc++.h>
using namespace std;

int middleOfThree(int a, int b, int c) 
{ 
    if ((a < b && b < c) || (c < b && b < a)) 
       return b; 
  
    else if ((b < a && a < c) || (c < a && a < b)) 
       return a; 
  
    else
       return c; 
} 

int main()
{
    int T,a,b,c,m=0;
    cin>>T;
    while (T--)
    {
        cin>>a>>b>>c;
        cout<<"Case "<<++m<<": "<<middleOfThree(a,b,c)<<endl;
    }
    return 0;
}