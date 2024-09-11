# include <stdio.h>
int main()
{
 int n,d50,d5,d1;
 scanf("%d",&n);
 d50=n/50;
 d5=n%50/5;
 d1=n%5/1;
 printf("%d=50*%d+5*%d+1*%d\n",n,d50,d5,d1);
}
