#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,max,min,count=0;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
    }

    max = a[0];
    min = a[0];

    for(i=0;i<n;i++){
        if(a[i]>max){
            max = a[i];
            count++;
        }
        if(a[i]<min){
            min = a[i];
            count++;
        }
    }
    cout << count << endl;

    return 0;
}