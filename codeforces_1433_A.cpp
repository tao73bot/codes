#include <bits/stdc++.h>
using namespace std;

int a[36]={1,11,111,1111,2,22,222,2222,3,33,333,3333,4,44,444,4444,5,55,555,5555,6,66,666,6666,7,77,777,7777,8,88,888,8888,9,99,999,9999};

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int x,i,ans,d,e;
        cin >> x;
        for(i=0;i<36;i++){
            if(a[i]==x){
                e=i+1;
                d=e%4;
                ans = (e/4)*10+(d*(d+1)/2);
                cout << ans << endl;
                break;
            }
        }
    }
    
    return 0;
}