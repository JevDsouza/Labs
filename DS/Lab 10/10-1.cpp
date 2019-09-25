#include <iostream>
#include <string.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    node();
    node(int);
    void attach(int, char[]);
    int depth(int);
    int leaves();
};

void inorder(node*);
void postorder(node*);
void preorder(node*);
void parent(node*, int);
bool ancestors(node*, int);

int main()
{
    cout << "Enter root node.\n";
    node *root = new node;
    cin >> root->data;

    cout << "Enter data and directions. Enter -99 to quit.\n";
    while(true)
    {
        int x;
        cin >> x;
        if(x == -99) break;
        char a[30];
        cin >> a;
        root->attach(x,a);
    }

    cout << "The tree has " << root->leaves() << " leaves\n";

    cout << "Here are the three traversals.";

    cout << "\nINORDER: ";
    inorder(root);
    cout << "\nPREORDER: ";
    preorder(root);
    cout << "\nPOSTORDER: ";
    postorder(root);

    cout << "\nThe depth of the tree is " << root->depth(0);

    cout << "\nEnter node data to find parent.\n";
    int x;
    cin >> x;
    parent(root, x);

    cout << "\nEnter node data to find all ancestors.\n";
    int y;
    cin >> y;
    ancestors(root, y);

    return 0;
}

node::node()
{
    data = 0;
    left = right = NULL;
}

node::node(int x)
{
    data = x;
    left = right = NULL;
}

void node::attach(int x, char a[])
{
    node *k = this;
    int n = strlen(a);
    for(int i = 0; i < n - 1; i++)
    {
        if(!k->left && !k->right)
        {
            cout << "Invalid node.\n";
            return;
        }
        if(a[i] == 'l') k = k->left;
        else k = k->right;
    }

    node *temp = new node(x);

    if(a[n - 1] == 'l') k->left = temp;
    else k->right = temp;
}

void inorder(node *root)
{
    if(!root) return;
    inorder(root->left);
    cout << root->data << " " ;
    inorder(root->right);
}

void preorder(node *root)
{
    if(!root) return;
    cout << root->data << " " ;
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root)
{
    if(!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void parent(node *root, int x)
{
    if(!root) return;
    if(root->left && root->left->data == x)
    {
        cout << root->data;
        return;
    }
    if(root->right && root->right->data == x)
    {
        cout << root->data;
        return;
    }
    parent(root->left, x);
    parent(root->right, x);
}

bool ancestors(node *root, int x)
{
    if(!root) return false;
    if(root->data == x) return true;
    if(ancestors(root->left, x) || ancestors(root->right, x))
        cout << root->data << " ";
}

int node::depth(int x)
{
    if(!this) return x - 1;
    return max(left->depth(x + 1), right->depth(x + 1));
}

int node::leaves()
{
    if(!this) return 0;
    if(!left && !right) return 1;
    return left->leaves() + right->leaves();
}
