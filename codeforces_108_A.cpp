#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

//void solve()
// {
// 	int h,m,a,b;
// 	scanf("%d:%d",&h,&m);
// 	a=h*60+m;
// 	if(a>=0&&a<70){
// 		printf("01:10\n");
// 	}
// 	if(a>=70&&a<140){
// 		printf("02:20\n");
// 	}
// 	if(a>=140&&a<210){
// 		printf("03:30\n");
// 	}
// 	if(a>=210&&a<280){
// 		printf("04:40\n");
// 	}
// 	if(a>=280&&a<350){
// 		printf("05:50");
// 	}
// 	if(a>=350&&a<601){
// 		printf("10:01\n");
// 	}
// 	if(a>=601&&a<671){
// 		printf("11:11\n" );
// 	}
// 	if(a>=671&&a<741){
// 		printf("12:21\n");
// 	}
// 	if(a>=741&&a<811){
// 		printf("13:31\n");
// 	}
// 	if(a>=811&&a<881){
// 		printf("14:41\n");
// 	}
// 	if(a>=881&&a<951){
// 		printf("15:51\n");
// 	}
// 	if(a>=951&&a<1202){
// 		printf("20:02\n");
// 	}
// 	if(a>=1202&&a<1272){
// 		printf("21:12\n");
// 	}
// 	if(a>=1272&&a<1320){
// 		printf("22:22\n");
// 	}
// 	if(a>=1320&&a<1412){
// 		printf("23:32\n");
// 	}
// 	if(a>=1412){
// 		printf("00:00\n");
// 	}
// }

void solve()
{
	int h,m;
	scanf("%d:%d",&h,&m);
	while(1)
	{
		m+=1;
		if(m>=60){
			h+=1;
			m%=60;
			h%=24;
		}
		if((h%10)*10+h/10==m){
			break;
		}
	}
	printf("%02d:%02d\n",h,m);
}
 
khela_shuru
{
	solve();
	gelo;
}