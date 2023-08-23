#include <iostream>
using namespace std;
class queue
{
public:
    int *arr;
    int size;
    int rear = -1;
    int front = -1;

    queue(int size)
    {
        arr = new int[size];
        this->size = size;
    }

    bool isempty()
    {
        if (rear == -1 && front == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isfull()
    {
        if (((rear + 1) % size) == front)   //rear==size
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void enqueue(int data)
    {
        if(isfull())
        {
            cout<<"queue is full"<<endl;
            return;
        }
         if(front == -1)
        {
            front++;
        }
        rear=(rear + 1)%size;
        //rear++;
        arr[rear]=data;
    }
    int dequeue()
    {
        if(isempty())
        {
            cout<<"queue is empty"<<endl;
            return;
        }
        int result = arr[front];
        /*for(int i=0;i<rear;i++)
        {
            arr[i]=arr[i+1];
        }
        rear --;*/
        if(rear==front)
        {
            rear=front=-1;
        }
        else{
            front=(front + 1)% size;
        }
        return result;
    }
    int peek()
    {
        if(isempty())
        {
             cout<<"queue is empty"<<endl;
            return;
        }
        return arr[0];
    }
};

int main()
{
}