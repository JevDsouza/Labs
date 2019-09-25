#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    node()
    {
        data = 0;
        left = right = NULL;
    }
};

node *root = NULL;

void insert();
void traverse(node*);
void search();
node* deletes(node*,int);
int minimum(node*);

int main()
{
    cout << "MENU:\n1.Insert\n2.Traverse\n3.Delete\n4.Search\n5.Exit\n";
    while(true)
    {
        int x;
        cin >> x;
        switch(x)
        {
        case 1:
            insert();
            break;
        case 2:
            traverse(root);
            cout<<"\n";
            break;
        case 3:
            {
                cout << "Enter data.\n";
                int x;
                cin >> x;
                root = deletes(root, x);
                break;
            }
        case 4:
            search();
            break;
        default:
            return 0;
        }
        cout << "Enter next choice.\n";
    }
}

void insert()
{
    cout << "Enter data\n";
    int x;
    cin >> x;
    node *curr = root, *prev = NULL;

    if(!root)
    {
        root = new node;
        root->data = x;
        return;
    }

    while(curr)
    {
        prev = curr;
        if(curr->data < x)
            curr = curr->right;
        else if(curr->data > x)
            curr = curr->left;
        else
        {
            cout << "Cannot insert.\n";
            return;
        }
    }

    node *temp = new node;
    temp->data = x;
    if(prev->data < x) prev->right = temp;
    else prev->left = temp;
    cout << "Inserted " << x << endl;
}

void traverse(node *root)
{
    if(!root) return;
    traverse(root->left);
    cout << root->data << " " ;
    traverse(root->right);
}

void search()
{
    cout << "Enter data.\n";
    int x;
    cin >> x;

    node *curr = root;
    while(curr)
    {
        if(curr->data < x) curr = curr->right;
        else if (curr->data > x) curr = curr->left;
        else
        {
            cout << "Found\n";
            return;
        }
    }
    cout << "Not found\n";
}

node* deletes(node *start, int x)
{
    node *curr = start;
    node *prev = NULL;

    bool found = false;

    while(curr)
    {
        if (curr->data == x)
        {
            found = true;
            break;
        }
        prev = curr;
        if(curr->data < x)
            curr = curr->right;
        else
            curr = curr->left;
    }

    if(!found)
    {
        cout << "Element not found.\n";
        return start;
    }

    if(!curr->left && !curr->right)
    {
        if(prev->left == curr) prev->left = NULL;
        else prev->right = NULL;
        delete curr;
        return start;
    }

    if(curr->left && curr->right)
    {
        curr->data = minimum(curr->right);
        deletes(curr->right, curr->data);
        return start;
    }

    else
    {
        if(!curr->left)
        {
            if(prev->left == curr) prev->left = curr->right;
            else prev->right = curr->right;
            delete curr;
            return start;
        }

        else
        {
            if(prev->left == curr) prev->left = curr->left;
            else prev->right = curr->left;
            delete curr;
            return start;
        }
    }
}

int minimum(node *start)
{
    if(!start) return start->data;
    else return minimum(start->left);
}
