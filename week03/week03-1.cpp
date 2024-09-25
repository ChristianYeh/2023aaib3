///week03-1
///因為range-based for迴圈只能在c++11之後使用
///如果使用c++98會無法正確編譯
///codeblocks 17.12裡 setting compliler 勾第二個 -std=c++11
#include <iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	for(char c:s){
		if(c!='2')cout<<c;
		}
	return 0;

}
