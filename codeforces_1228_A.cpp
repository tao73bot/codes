#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    for(int i=a;i<=b;i++){
        int x = i;
        set<int>s;
        int c=0;
        while (x)
        {
            c++;
            s.insert(x%10);
            x=x/10;
        }
        if(s.size()==c){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 <<endl;
    return 0;
}