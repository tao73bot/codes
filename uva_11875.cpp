#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,c=0;
    cin >> T;

    while(T--)
    {
        c++;
        int N,i,captain,a;
        cin >> N;

        for(i=0;i<N;i++){
            scanf("%d",&a);
            if(i==N/2){
                captain = a;
            }
        }

        printf("Case %d: %d\n",c,captain);
    }
    
    return 0;
}