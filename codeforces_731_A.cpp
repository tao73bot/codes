#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l,sum=0;
    char ch='a';
    char s[102];
    cin >> s;
    l = strlen(s);
    for(int i=0;i<l;i++){
        if(fabs(s[i]-ch)>13){
            sum+=26-fabs(s[i]-ch);
        }
        else
        {
            sum+=fabs(s[i]-ch);
        }
        ch = s[i];
    }

    cout << sum << endl;

    return 0;
}