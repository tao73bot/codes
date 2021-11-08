#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,sum=0,p=0,ans=0;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]==0){
                p++;
            }
            sum+=a[i];
        }
        sum=sum+p;
        if(p>0){
            ans+=p;
        }
        if(sum==0){
            ans+=1;
        }

        cout << ans << endl;
    }
    
    return 0;
}