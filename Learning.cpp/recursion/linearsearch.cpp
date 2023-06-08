#include<iostream>
using namespace std;
bool linearSearch(int *arr, int size, int key){
    // Base case

    if ( key == arr[0]){
        return true;
    }else{
        return false;
    }
          
    bool ans = linearSearch( arr +1, size - 1, 15) ;      
    return ans;  

}
int main()
{
    int arr[10];
    int size = 10;
    for(int i = 0; i<10 ; i++){
        cin>>arr[i];
    }
   int ans = linearSearch(arr, 10 ,15);
   //cout<<ans<<endl;

    if(ans){
        cout<<"Array is present "<<ans<<endl;
    }
    else{
        cout<<"Array is not present "<<ans<<endl;

    }

return 0;
}