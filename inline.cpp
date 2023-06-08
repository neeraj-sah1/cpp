#include<iostream>
using namespace std;
inline int getMax(int& a, int& b){
    int ans;
    ans = a>b ? a: b;
    return ans;
}
int main()
{
    int a = 1, b = 3;
    int ans = 0;
    ans = getMax(a,b);
    cout << ans<<endl;
    a =+3;
    b +=1;
    ans = getMax(a,b);
    cout << ans<<endl;



return 0;
}