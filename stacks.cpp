//stacks using array vro!
#include<iostream>
using namespace std;

class stacks
{
     public:
     int* arr;
     int top;
     int size;

     stacks(int size)
     {
         this -> size=size;
         arr=new int[size];
         top=-1;
     }
     void push(int element)
     {
        if(size - top >1)
        {
            top++;
            arr[top]=element;
        }
        else
        {
            cout<<"Stack overflow"<<endl;
        }
     }
     void pop()
     {
        if(top>=0)
        {
            top--;
        }
        else
        {
            cout<<"Stack underflow"<<endl;
        }
     }
     bool empty()
     {
        if(top<=-1)
        {
            cout<<"Stack is empty"<<endl;
            return true;
        }
        else
        {
            cout<<"Stack is not empty  ";
            return false;
        }
     }
     int peek()
     {
         if(top>=0)
         {
            return arr[top];
         }
         else
         {
            cout<<"Stack is empty  ";
         }
     }

};



int main()
{
    stacks st1(5);
    st1.push(56);
    st1.push(90);
    st1.push(5);
    st1.push(7);
    cout<<st1.peek()<<"  "<<st1.empty()<<endl;
    st1.pop();
    st1.pop();
    st1.pop();
    st1.pop();
    cout<<st1.empty()<<endl;

}