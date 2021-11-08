#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,m=0,d;
    cin >> n;
    char s[102];
    cin >> s;

    d = n/11;

    for(i=0;i<n;i++){
        if(s[i]=='8'){
            m++;
        }
    }

    if(m==0 || d==0){
        printf("0\n");
    }

    if(m>=d && d!=0){
        printf("%d\n",d);
    }
    if(m>0 && m<d){
        printf("%d\n",m);
    }

    return 0;
}