#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int length(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
void insertathead(int d, Node *&head)
{
    Node *temp = new Node(d);
    if (head == NULL)
    {
        head = temp;

    }

    else
    {
        head->prev = temp;
        temp->next = head;
        head = temp;
    }
}
void insertattail(int d, Node *head)
{
    Node *temp = new Node(d);
    if (head == NULL)
    {

        head = temp;
        
    }
    else
    {
        Node* tail=head;
        while(tail->next!=NULL)
        {
            tail=tail->next;
        }
        tail->next=temp;
        temp->prev=tail;
    }
}
void insert(int d, int posn, Node *&head)
{
    if (posn == 1)
    {
        insertathead(d, head);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < posn - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertattail(d, head);
        return;
    }

    Node *curr = new Node(d);
    curr->prev = temp;
    curr->next = temp->next;
    temp->next->prev = curr;
    temp->next = curr;
}

void del(int posn, Node *&head)
{
    if (posn == 1)
    {
        Node *temp = head;
        head = head->next;
        head->prev=NULL;
        temp->next = NULL;
        temp->prev=NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *previ = NULL;
        int cnt = 1;
        while (cnt < posn)
        {
            previ = curr;
            curr = curr->next;
            cnt++;
        }
        previ->next = curr->next;
        previ->next->prev=previ;
        curr->next = NULL;
        curr->prev=NULL;
        delete curr;
    }
}

int main()
{
    Node *head = NULL;
    
    insertathead(371, head);
    insertattail(53, head);
    insertathead(34, head);
    insert(602, 2, head);
    insert(21, 3, head);
    print(head);
    del(1,head);
    print(head);
}