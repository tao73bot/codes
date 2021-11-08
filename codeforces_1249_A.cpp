#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n,i,cnt=1,j;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        for(i=0;i<n-1;i++){
            if(a[i+1]-a[i]==1){
                cnt++;
            }
        }

        if(cnt>=2){
            cout << '2' << endl;
        }
        else
        {
            cout << cnt << endl;
        }
        
    }
    
    return 0;
}