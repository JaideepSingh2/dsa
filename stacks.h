#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class stack
{
public:
    Node *head;
    int size;
    stack(int size)
    {
        this->size = size;
        this->head = NULL;
    }
    void insertathead(int d)
    {
        Node *temp = new Node(d);
        if (head == NULL)
        {

            head = temp;
        }

        else
        {
            temp->next = head;
            head = temp;
        }
    }
    void push(int d)
    {
        int cnt=0;
        Node* temp=head;
        while(temp!=NULL)
        {
            temp = temp->next;
            cnt++;
        }

        if(cnt<size)
        {
             insertathead(d);
        }
        else
        {
            cout<<"Stack overflow"<<endl;
        }

    }
    void pop()
    {
        Node *temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    void peek()
    {
        if(head==NULL)
        {
            cout<<"Stack empty"<<endl;
        }
        else
        {
           cout<<head->data<<endl;
        }
    }
    bool isempty()
    {
        if(head==NULL)
        {
            return true;
        }
        else
        return false;
    }
};

