#include<iostream>
using namespace std;
class dequeue
{
    public :
    int size;
    int *arr;
    int rear=-1;
    int front=-1;
     
    dequeue(int size)
    {
        arr = new int[size];
        this -> size=size;
    }
};
int main()
{
    
}