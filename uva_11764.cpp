#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,c=0;
    cin >> T;
    while (T--)
    {
        int N,h=0,l=0;
        cin >> N;
        int a[N];
        for(int i=0;i<N;i++){
            cin >> a[i];
        }
        for(int i=0;i<N-1;i++){
            if(a[i]<a[i+1]){
                h++;
            }
            if(a[i]>a[i+1]){
                l++;
            }
        }

        printf("Case %d: %d %d\n",++c,h,l);
    }
    
    return 0;
}