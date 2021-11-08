#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long S,N;
        int ans=0;
        cin >> S >> N;

        while (true)
        {
            ans+=(S/N);
            S = S%N;
            if(S==0){
                break;
            }
            else if(S==1||S%2==0){
                ans+=1;
                break;
            }
            else if(S%2!=0){
                N = S-1;
            }
        }
        
        printf("%d\n",ans);
    }
    
    return 0;
}