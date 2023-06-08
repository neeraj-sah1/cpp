#include<iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;

    
    if(marks>33){
        if(marks>80){
            cout<<"Gracefully pass"<<endl;
        }else{
            cout<<"Pass"<<endl;
        }
    }
    else
         {
            cout<<"Fail"<<endl;
        }
    marks>33? cout<<"pass"<<endl : cout<<"Fail"<<endl;
    return 0;
}