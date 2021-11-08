#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0;
    cin >> n;
    while (n--)
    {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];

        if((a[0]+a[1]+a[2])>=2){
            cnt++;
        }
    }

    cout << cnt << endl;
    
    return 0;
}