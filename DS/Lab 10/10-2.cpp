#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

node *create();
void inorder(node*);

int main()
{
    cout << "Enter data. Enter -1 at any point to stop.\n";
    node *root = NULL;
    root = create();
    inorder(root);
    return 0;
}

node *create()
{
    int x;
    cin >> x;

    if(x == -1) return NULL;

    node *temp = new node;
    temp->data = x;

    cout << "Left child of " << x << endl;
    temp->left = create();
    cout << "Right child of " << x << endl;
    temp->right = create();

    return temp;
}

void inorder(node *root)
{
    if(!root) return;
    inorder(root->left);
    cout << root->data << " " ;
    inorder(root->right);
}
