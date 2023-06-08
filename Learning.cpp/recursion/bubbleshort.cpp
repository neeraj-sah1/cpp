#include<iostream>
using namespace std;
int bubbleShort(int* arr, int n){
    // base case
    if(n==0 || n == 1){
        return arr[1];
    
    }
    // processing
    for(int i =0; i <n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
        }

    }
    //recursion call
    bubbleShort(arr, n-1);
}
int main()
{
    int arr[10] = {5,9,2,6,3,15,10,14,12,20};
    bubbleShort(arr, 10);
    for(int i = 0; i<10; i++){
    cout<<arr[i]<<" ";
    }

return 0;
}