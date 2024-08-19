#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* root = NULL;
Node* MakeNode(int data);
void Insert(Node* root, Node* newNode);
void Postorder(Node* r);

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int value;

    while (cin >> value)
    {
        Insert(root, MakeNode(value));
    }

    Postorder(root);

    return 0;
}

Node* MakeNode(int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void Insert(Node* r, Node* newNode)
{
    if (root == NULL) root = newNode;
    else if (r->data < newNode->data)
    {
        if (r->right == NULL)
            r->right = newNode;
        else
            Insert(r->right, newNode);
    }
    else if (r->data > newNode->data)
    {
        if (r->left == NULL)
            r->left = newNode;
        else
            Insert(r->left, newNode);
    }
}

void Postorder(Node* r)
{
    if (r->left != NULL)
        Postorder(r->left);
    if (r->right != NULL)
        Postorder(r->right);
    cout << r->data << endl;
}
