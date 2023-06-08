#include<iostream>
using namespace std;
void update(int**p){
    p  = p +1;
    //kuch change hoga kya
    *p = *p +1;
    //kuch change hoga kya
    **p = **p +1;
    //kuch change hoga kya

}
int main()
{

    int i = 5;
    int *p = &i;
    int **p2 = &p;
    /*cout<<i<<endl;  
    cout<<*p<<endl;  
    cout<<**p2<<endl;  
    cout<<&i<<endl;  
    cout<<p<<endl;  
    cout<<p2<<endl;*/
    cout<<"before apply fuction"<<endl;
    cout<<i<<endl;  
    cout<<p<<endl;  
    cout<<p2<<endl;
    update(p2);
    cout<<"after apply fuction"<<endl;
    cout<<i<<endl;  
    cout<<p<<endl;  
    cout<<p2<<endl;

    return 0;
}