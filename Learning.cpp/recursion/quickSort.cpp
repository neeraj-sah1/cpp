#include<iostream>
using namespace std;
int N = 5;
int partition(int arr[], int s, int e ){
    for(int i=0;i<N;i++)cout<<arr[i]<<" ";cout<<endl;
    int pivot = arr[s];
    int count = 0;
    for(int i =s+1; i<=e; i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    //place pivot at right position
    int pivotIndex = s+count;
    swap(arr[pivotIndex], arr[s]);
    // for left and right wala condition 
    int i = s, j = e;
    while(i < pivotIndex && j > pivotIndex){
        while (arr[i]<=pivot)
        {
            i++;
        }
        while (arr[j]>pivot)
        {
            j--;
        }
        if(arr[i]>pivot && arr[j]<pivot){
            swap(arr[i++], arr[j--]);
        }   
    }
    return  pivotIndex;

}
void quickSort(int arr[], int s, int e){
     // base case
    if(s>=e)
        return ;
    // partition     
    int p = partition(arr, s, e);  
    //left part sort karo
    quickSort(arr, s, p-1);
    //right part sort karo
    quickSort(arr, p+1, e);

}
int main()
{
    int arr[5] = {100,4,69,6,9};
    int n =5;
    quickSort(arr, 0, n-1);
    for(int i= 0; i<n; i++){
        cout<< arr[i]<<" ";
    }
return 0;
}