#include<iostream>
using namespace std;
void sayWord(int n, string a[]){
    // Base Condition
    if(n==0){
        return ;
    }
    //processing
    int digit = n%10;
    n = n/10;
    
    // recursion expression 
    sayWord(n, a);
    cout<<a[digit]<<" ";
     
}
int main()
{
    int n;
    cin>> n;
    string a[10] = {"Zero", "One", "Two", "Three","Four","Five","Six","Seven","Eight","Nine"};
    sayWord(n,a);
return 0;
}