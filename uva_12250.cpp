#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c=0;
    string s;
    while (cin>>s)
    {
        if(s== "HELLO"){
            printf("Case %d: ENGLISH\n",++c);
        }
        else if(s=="HOLA"){
            printf("Case %d: SPANISH\n",++c);
        }
        else if(s=="HALLO"){
            printf("Case %d: GERMAN\n",++c);
        }
        else if(s=="BONJOUR"){
            printf("Case %d: FRENCH\n",++c);
        }
        else if(s=="CIAO"){
            printf("Case %d: ITALIAN\n",++c);
        }
        else if(s=="ZDRAVSTVUJTE"){
            printf("Case %d: RUSSIAN\n",++c);
        }
        else if(s=="#"){
            break;
        }
        else
        {
            printf("Case %d: UNKNOWN\n",++c);
        }
    }
    
    return 0;
}