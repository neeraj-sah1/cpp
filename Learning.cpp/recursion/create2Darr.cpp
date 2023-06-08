#include<iostream>
using namespace std;
int main()
{
    
    
    
  /*
    int n ;
    cin>>n;
    create 2D array using dynamic location memory
    int **arr = new int *[n];
    for(int i = 0; i<n ;i++ ) {
        arr[i] = new int[n];
    }
    taking inputs
    for(int i =0; i<n ; i++){
        for(int j =0; j<n ; j++){

            cin >> arr[i][j];
        }

    }
    // taking output
    for(int i =0; i<n ; i++){
        for(int j =0; j<n ; j++){

            cout << arr[i][j];
            cout <<"  ";
        }
        cout << "  " <<endl; /

    }*/
    int row ;
    cin>>row;
    int col;
    cin>>col;
    // create 2D array using dynamic location memory
    int **arr = new int *[row];
    for(int i = 0; i<row ;i++ ) {
        arr[i] = new int[col];
    }
 // taking inputs
    for(int i =0; i<row ; i++){
        for(int j =0; j<col ; j++){

            cin >> arr[i][j];
        }

    }
    // taking output
    for(int i =0; i<row ; i++) {
        for(int j =0; j<col ; j++) {

            cout << arr[i][j];
            cout <<"  ";
        }
        cout << "  " <<endl;



    
}
// deleting data stored in heep;
   for(int i  = 0; i<row; i++){
    delete [ ]arr[i];
   }
   delete []arr;
return 0;
}