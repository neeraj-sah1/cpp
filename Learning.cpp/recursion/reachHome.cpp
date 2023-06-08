#include<iostream>
using namespace std;
int reachHome(int src, int dest){
    cout<<"start"<<src<<" "<<"dest"<<dest<<endl;
    // Base condition
    if(src == dest){
        cout<<"pahuch gya"<<endl;
        return 0 ;
    }
    // Processing
    src++;
    reachHome(src,dest);

}
int main()
{
    int dest =20;
    int src = 1;
    reachHome(src,dest);
return 0;
}