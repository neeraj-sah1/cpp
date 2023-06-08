#include<iostream>
using namespace std;
int sumArray(int *arr, int size){
    // Base case
    if(size == 0 || size == 1)
        return arr[0];
        //recursion expression
    int remainingPart =  sumArray(arr+1,size-1);
    int sum = arr[0]+ remainingPart;    
    
    return sum;

}
int main()
{
    int arr[10];
    int size = 10;
    for(int i = 0; i<10 ; i++){
        cin>>arr[i];
    }
    int sum = sumArray(arr, size);
    cout<<"Sum of all element of array"<<sum<<endl;

return 0;
}