#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,x,i,sum,ans=0;
    cin >> n >> x;
    sum=x;
    int a[n];
    char s[n];
    for(i=0;i<n;i++){
        cin >> s[i] >> a[i];
    }
    for(i=0;i<n;i++){
        if(s[i]=='+'){
            sum+=a[i];
        }
        else if(s[i]=='-'){
            if(sum>=a[i]){
                sum-=a[i];
            }
            else{
                sum=sum;
                ans++;
            }
        }
    }
    cout << sum << " "<< ans << endl;

    return 0;
}