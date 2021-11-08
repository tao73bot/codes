#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

int gcd(int a,int b)
{
    if(a%b==0) return b;
    else return gcd(b,a%b);
}

khela_shuru
{
	SIS;
	int t;
	cin >> t;
	while(t--)
	{
		string a,b,s,s1;
        int x,y,z,i=0;
        cin >> a >> b;
        x=a.size();
        y=b.size();
        z=x*y/gcd(x,y);
        while(z--)
        {
            s+=a[i%x];
            s1+=b[i%y];
            i++;
        }
        if(s==s1){
            cout << s << "\n";
        }
        else cout << "-1\n";
	}
	gelo;
}