#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;

    while (scanf("%d %d",&a,&b))
    {
        if(a==0 && b==0){
            break;
        }
        int i,ans=0;
        double s;

        for(i=a;i<=b;i++){
            s = sqrt(i);
            int r = s/1;

            if((s<=0||s>=0) && r*1==s){
                ans++;
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}