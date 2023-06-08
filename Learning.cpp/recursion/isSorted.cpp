#include<iostream>
using namespace std;
bool isShorted(int *arr, int size){
    // Base condition

    if(size ==0 || size == 1){
        return true;
    }
    // processing
    if(arr[0]>arr[1]){
        return false;

    } 
    // recursion expression
    else{
        bool remainingPart = isShorted(arr +1, size -1);
        if(remainingPart==0)return false;
    }
    return true;
}

int main()
{
    int arr[10] = {-
    1,1,3,6,8,5,76,96};
    int size = 8;

    bool ans = isShorted(arr, size);
    if(ans){
        cout<<"Array is shorted"<<endl;

    }
    else{
        cout<<"Array is not shorted"<<endl;
    }
return 0;
}