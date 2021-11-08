#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n,c1,c2,h,i,a=0,b=0;
        int ara[3];
        cin >> n >> c1 >> c2 >> h;
        string s;
        cin >> s;

        for(i=0;i<s.size();i++){
            if(s[i]=='1'){
                a++;
            }
            else
            {
                b++;
            }
        }
        ara[0]= a*c2+b*c1;
        ara[1]= a*h+n*c1;
        ara[2]= b*h+n*c2;

        sort(ara,ara+3);

        cout << ara[0] << "\n";
    }
    return 0;
}