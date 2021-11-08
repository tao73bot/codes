#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,sum1=0,sum2=0,cnt=1;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
        sum1+=a[i];
    }
    sort(a,a+n);
    for(i=n-1;i>=0;i--){
        sum2+=a[i];
        if((sum2>(sum1/2)&&(sum1<=sum1))){
            break;
        }
        else{
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}