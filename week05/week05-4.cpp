//week05-3
#include <stdio.h> //scanf
#include <iostream> //cout
#include <string> //tolower() find(
int main()
{
	char s[]="1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	char c;
	while(scanf("%c",&c)==1){
		c=tolower(c);
		if(c==' '||c=='\n') printf("%c",c);
		else{
			c=*(strchr(s,c)-2);
			printf("%c",c);
		}
	}
}
