#include<iostream>
using namespace std;
int factorial(int n){
    //base condition
    if(n==0){
        return 1;
    }
    //int chhoti = factorial(n-1);
    //int badi = n*chhoti;
    return n*factorial(n-1);

}
int main()
{
    //factorial problem
    int n;
    cin >> n;
    int ans = factorial(n);
    cout <<ans <<endl;
return 0;
}