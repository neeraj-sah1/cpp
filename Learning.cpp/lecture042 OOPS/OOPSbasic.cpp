#include<iostream>
using namespace std;
class Hero{
    //Properties
    public :
    int health;
    char level;
    Hero (){
        cout<<"Constructor called"<<endl;
    }  
    //Paramerterised Constructor
    Hero(int health, char level){
        cout<<"this ->"<<this <<endl;
        this->health = health;
        this->level = level;
    } 
    void print(){
        cout<< health <<endl;
        cout << level <<endl;
    }
    // how to use getter and setter
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h ){
        
            health = h;
        }
    
    void setLevel(char ch){
        level = ch;
    }
    
};
int main()
{    
    Hero suresh(70, 'C');
    suresh.print();
// copy all element in other object
// copy constructer  
    Hero r(suresh);
    r.print();






    // Created a object statically
   /* cout<<"HI"<<endl;
    Hero Neeraj(10);
    Neeraj.print();
    Hero temp(100,'A');
    temp.print();
    // dynamically 
    Hero *a = new Hero(11 ,'d');
    a->print();

    cout<<"address of neeraj -> "<<&Neeraj<<endl;

    cout<<"Hello"<< endl;
    */
    
     /*
    //Creation of object
    // static allocation
    Hero Neeraj;
    Neeraj.setHealth(80);
    Neeraj.setLevel('A');
    cout<<"Size of static "<<sizeof(Neeraj)<<endl;
    cout<<"Neeraj Health is "<<Neeraj.getHealth()<<endl;
    cout<<"Neeraj Level is "<<Neeraj.getLevel()<<endl;

    // dynamically allocation
    Hero *h = new Hero;
    h->setHealth(70);
    h->setLevel('N');
    // for printing value alternative method is h->.getHealth();
    cout<<"Size of dynamically "<<sizeof(*h)<<endl;
    cout<<"Neeraj Health is "<<(*h).getHealth()<<endl;
    cout<<"Neeraj Level is "<<(*h).getLevel()<<endl;

    cout<<"Neeraj Health is "<< h->getHealth()<<endl;
    cout<<"Neeraj Level is "<< h->getLevel()<<endl;
    Neeraj.setHealth(345);
    Neeraj.setLevel ('H');

    cout<<"health is : "<<Neeraj.health << endl;
    cout<<"Level is : "<<Neeraj.level<<endl;
*/

return 0;
}