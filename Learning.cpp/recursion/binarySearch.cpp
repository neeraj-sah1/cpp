#include<iostream>
using namespace std;
int print(int *arr, int s , int e, int key){
    for(int i = 0; i<e; i++){
        cout<<arr[i];
    }
}
bool binarySearch(int *arr, int s, int e, int key ){
    // base case
    int mid = s + (e-s)/2;
    // for checking in right part
    print(arr, s, e, key); 
    if(arr[mid] = key){
        return true;
    }
    if(arr[mid]<key){
        return binarySearch(arr, s = mid +1, e, key);
    }
    if(arr[mid]>key){
        return binarySearch(arr, s, e = mid -1, key);
    }
    return binarySearch(arr, s, e = mid -1, key);

    
        

}
int main()
{
    int arr[10];
    int size = 10;
    cout<<"Enter your arrays Element"<<endl;
    for(int i = 0; i<=10; i++){
        cin>>arr[i];
    }
    for(int i = 0; i<=10; i++){
        cout<<arr[i];
    }
    binarySearch(arr, 0 ,10, 15);
return 0;
}