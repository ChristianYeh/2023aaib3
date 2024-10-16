///week06-2b CPE ²Ä2ÃD UVA 10107
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> a;
    int now;
    while(cin>>now){
        a.push_back(now);
        int N=a.size();
        if(N%2==1) cout << a[N/2] << "\n";
        else cout << (a[N/2-1]+a[N/2])/2 << "\n";
    }
}
