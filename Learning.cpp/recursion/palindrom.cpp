#include<iostream>
using namespace std;
static int len;
bool checkPalindrom(string str, int i, int j){
    // Base Condition 
    
    if(str[i]== str[j]){
        if(len%2 != 0){
            if(i==j)
            return true;
        }else{
            if(j-i == 1)
            return true;
        }

        return checkPalindrom(str, i++, j--);
    }
    else{
         
        return false; 
    }
        
    
}
int main()
{
    string name = "ama";
    len = name.length();
    if(checkPalindrom( name, 0, name.length()-1)){
        cout<<" Your string is a palindrom"<<endl;

    }
    else{
        cout<<"Your string is not a palindrom "<< endl;
    }
return 0;
}