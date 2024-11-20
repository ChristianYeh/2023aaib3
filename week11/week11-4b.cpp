//week11-4b
#include <iostream>
using namespace std;
int f(int n){ //part 2: bopifa
	int ans=0;
	while(n>0){
		ans += n%10;
		n=n/10;
	}
	return ans;
}
int main()
{
	int n;
	while(cin>>n){ //part 1
		if(n==0) break;

		n=f(f(f(n)));

		cout << n << "\n";
	}
}
