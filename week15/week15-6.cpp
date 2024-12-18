#include <stdio.h>
int MYPOWER(int a,int b)
{
	int i,ans=1;
	for(i=1;i<=b;i++){
		ans*=a;
	}
	return ans;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
