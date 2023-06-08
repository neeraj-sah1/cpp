#include<iostream>
using namespace std;
    void update(int &p){
        p++;
    }
int main()
{
    int a;
    int *p =&a;
    cin>>a;
    update(a);
    cout <<*p<<endl;
    cout <<a<<endl;
    return 0;
}