#include<iostream>
using namespace std;
class Node
{
    public :
    int data;
    Node* next;
    Node(int data)
    {
        this -> data = data;
        this -> next=NULL;
    }
    ~Node()
    {
        if(this -> next != NULL)
        {
            this -> next != NULL;
            delete next;
        }
    }
};
void insertAtHead(int d, Node* &head)
{
    Node* temp= new Node(d);
    temp -> next=head;
    head=temp;
}
 void print(Node* &head)
   {
       Node *temp=head;
      while(temp!=NULL)
    {
        cout<< temp -> data<<"   ";
        temp=temp -> next;
    }
   }
   void insertAtTail(int d,Node* &tail)
   {
    Node* temp= new Node(d);
    tail -> next = temp;
    tail = temp;
   }
   void insert(int d,int posn,Node* &head,Node* &tail)
   {
    if(posn==1)
    {
         insertAtHead(d,head);
         return;
    }
    Node* temp;
    temp=head;
    int count =1;
    while(count<posn-1)
    {
          temp= temp ->next;
          count ++;
    }
    if(temp->next==NULL)
    {
        insertAtTail(d,tail);
        return;
    }
    Node* insrt=new Node(d);
    insrt ->next=temp ->next;
    temp -> next= insrt;
    
   }
   void del(int posn,Node* &head)
   {
    if(posn==1)
    {
        Node* temp=head;
        head=head->next;
        temp -> next =NULL;
        delete temp;
    }
    else
    {
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<posn)
        {
            prev=curr;
            curr=curr -> next;
            cnt++;
        }
        prev -> next=curr ->next;
        curr->next=NULL;
        delete curr;

    }
   }
int main()
{
    Node* n1= new Node(2300);
    Node* head= n1;
    Node* tail=n1;
    insertAtHead(32,head);
    insertAtHead(356,head);
    insertAtTail(45,tail);
    insertAtTail(78,tail);

    insert(56,3,head,tail);
    del(2,head);
     print(head);
    

   return 0;
}