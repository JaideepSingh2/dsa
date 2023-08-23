#include<iostream>
using namespace std;
class Hero 
{ 
public :
    int health;
    char name;
     void setl(double h)
   {
         l=h;
   }
   double getl()
   {
    return l;
   }
private :
    double l;
    
};

int main()
{
    Hero h1;
    h1.health=78;
    h1.setl(56);
    cout<<"size : "<<h1.health<<endl;
    cout<<"l "<<h1.getl()<<endl;
}