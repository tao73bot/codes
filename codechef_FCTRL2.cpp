#include <bits/stdc++.h>
using namespace std;

#define MX 10000

int process(int x,int a[],int a_size)
{
    int carry=0;

    for(int i=0;i<a_size;i++){
        int p=a[i]*x+carry;    //p=product
        a[i]=p%10;
        carry=p/10;
    }

    while(carry)
    {
        a[a_size]=carry%10;
        carry/=10;
        a_size++;
    }
    return a_size;
}

void fact(int n)
{
    int a[MX];

    a[0]=1;
    int a_size=1;

    for(int x=2;x<=n;x++){
        a_size=process(x,a,a_size);
    }

    for(int i=a_size-1;i>=0;i--){
        cout << a[i];
    }
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        fact(n);
    }
    return 0;
}
