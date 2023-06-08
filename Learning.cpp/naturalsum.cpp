

#include<iostream>
using namespace std;
int main(){

    int n;
    int sum = 0;
    cin>>n;
    int i =1; // loop variable

    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}

