#include <bits/stdc++.h>
using namespace std;

int main()
{
    int M;
    cin >> M;

    while (M--)
    {
        int ara[100000];
        int N,K,i,sum = 0;
        cin >> N >> K;

        for(i=0;i<N;i++){
            scanf("%d",&ara[i]);
        }
        
        if(sum%K==0){
            cout << "Divisible" << endl;
        }
        else
        {
            cout << "Not divisible" << endl;
        }
        
    }
    
    return 0;
}