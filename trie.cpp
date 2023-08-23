#include <iostream>
using namespace std;

class trienode
{
public:
    char data;
    trienode *children[26];
    bool isterminal;

    trienode(char data)
    {
        this->data = data;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isterminal = false;
    }
};
class trie
{
public:
    trienode *root = new trienode('\0');
    void insertutil(string word, trienode *root)
    {
        if (word.length() == 0)
        {
            root->isterminal = true;
            return;
        }
        int index = word[0] - 'a';
        trienode *child;

        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            child = new trienode(word[0]);
            root->children[index] = child;
        }

        insertutil(word.substr(1), child);
    }

    void insertword(string word)
    {
        insertutil(word, root);
    }
    bool sutil(string word, trienode *root)
    {
        if (word.length() == 0)
        {
            return root->isterminal;
        }
        int index = word[0] - 'a';
        trienode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            return false;
        }
        return sutil(word.substr(1), child);
    }

    bool searchword(string word)
    {
        return sutil(word, root);
    }
    void removeutil(string word,trienode *root)
    {
         if (word.length() == 0)
        {
             root->isterminal=false;
             return;
        }
        int index = word[0] - 'a';
        trienode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        
         removeutil(word.substr(1), child);

    }
    void removew(string word)
    {
        if(searchword(word)==true)
        { 
            removeutil(word,root);
            cout<<"word sucessfully removed"<<endl;
        }
        else
        {
            cout<<"word not present"<<endl;
        }

    }
};

int main()
{
    trie t;
    t.insertword("abcd");
    cout << t.searchword("abcd") << endl;
    t.removew("abcd");
    cout << t.searchword("abcd") << endl;
}