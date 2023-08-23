#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
void buildtree(node *&root)
{
    cout << "Enter the data (Enter -1 to terminate) " << endl;
    int d;
    cin >> d;
    if (d == -1)
    {
        return;
    }
    root = new node(d);

    cout << "Enter the data to the left of " << d << endl;
    buildtree(root->left);
    cout << "Enter the data to the right of " << d << endl;
    buildtree(root->right);
}
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
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
void inorder(node *root,int &cnt)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left,cnt);
    if(root->left==NULL && root->right==NULL)
    {
        cnt++;
    }
    cout << root->data << " ";
    inorder(root->right,cnt);
}
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
void buildlevelorder(node* &root)
{
    queue<node*> q;
    cout<<"Enter data for root"<<endl;
    int d;
    cin>>d;
    root= new node(d);
    q.push(root);
    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();
        cout<<"Enter data to the left of : "<<temp->data<<endl;
        int ld;
        cin>>ld;
        
        
        if(ld!=-1)
        {
            temp->left=new node(ld);
        q.push(temp->left);
        }
        cout<<"Enter data to the right of : "<<temp->data<<endl;
        int rd;
        cin>>rd;
        
        if(rd!=-1)
        {
            temp->right=new node(rd);
        q.push(temp->right);
        }
    }

}
int main()
{
    int cnt=0;
    node *root2 = NULL;
    buildlevelorder(root2);
    
    // buildtree(root2);
    // levelordertraversal(root2);
    // postorder(root2);
    // preorder(root2); 
     inorder(root2,cnt);

     cout<<cnt<<endl;
}