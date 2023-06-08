#include<iostream>
using namespace std;
void merge(int *arr, int s, int e){
    int mid = s+ (e-s)/2;

    int len1 = mid- s+ 1;
    int len2 = e -mid ;
    // create two array of size len1 and len2
    int *first = new int[len1];
    int *second = new int[len2];
    // copy element in new array
    int k = s;
    for(int i =0; i<len1;i++){
        first[i] = arr[k++];
    }
     int k = mid +1;
    for(int i =0; i<len2;i++){
        second[i] = arr[k++];
    }
    // merge 2 sorted arrays
    
    

}
void mergeSort(int *arr, int s ,int e){

    // base case
    if(s>e){
        return ;
    }
    int mid = s+ (e-s)/2; 
    // left part sort karna h
    mergeSort(arr, s,mid);
    // right part sort karna h
    mergeSort(arr, mid+1, e);
    // for merge 
    merge(arr, s, e);

}
int main()
{   
    int arr[5] = {2,5,1,6,9};
    int n =5;
    mergeSort(arr,0, n-1); 
return 0;
}