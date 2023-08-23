#include<iostream>
#include<queue>
using namespace std;
class node
{
    public :
    int data;
    node* left;
    node* right;
    
    node(int data)
    {
        this -> data=data;
        this -> left=NULL;
        this -> right=NULL;
    }
};
void bst(node* &root,int d)
{
    if(root==NULL)
    {
        root= new node(d);
        return;
    }
    if(d==root->data)
    {
        return;
    }
    if(d>root->data)
    {
          bst(root->right,d);
    }
    else
    {
        bst(root->left,d);
    }
    return;
}
void insrt(node* &root)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        bst(root,data);
        cin>>data;
    }
}
void levelordertraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << "  ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
int minval(node* root)
{
    if(root->left==NULL)
    {
        int d=root->data;
        return d;
    }
    else
    {
        minval(root->left);
    }
}

int main()
{
    node* root=NULL;
    cout<<"Enter data into the tree with space in between : "<<endl;
    insrt(root);
    levelordertraversal(root);
    cout<<endl<<minval(root);
}