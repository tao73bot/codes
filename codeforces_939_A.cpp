#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,cnt=0;
    cin >> n;
    int a[n];
    for(i=1;i<=n;i++){
        cin >> a[i];
    }

    for(i=1;i<=n;i++){
        if((a[a[a[i]]])==i){
            cnt++;
        }
    }
    if(cnt>0){
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}
