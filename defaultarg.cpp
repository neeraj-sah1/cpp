#include<iostream>
using namespace std;
void print(int arr[], int n,int start = 0){
    for(int i = start; i< n; i++ )
    cout<<arr[i]<<endl;

}
int main()
{
    int arr[6] = {1,2,3,4,5,6};
    int size = 6;

    print(arr, 6);
    cout<<endl;
    print(arr,6,2);

return 0;
}