#include <iostream>
using namespace std;
void swap(int *x,int *y){
    int temp = *x;
    *y = *x;
    temp = *y;
                 

}
int main(){
    int x;
    int y;
    int *ptr1 =&x;
    int *ptr2 = &y;
    cin>>x>>y;
    swap(x,y);
    cout <<x<<" "<<y<<endl;
    return 0;
}