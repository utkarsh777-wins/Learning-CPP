#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left; 
    Node* right;
};


// void createNode(Node** root, int value) {
//     Node* newNode = new Node();
//     newNode->data = value;
//     newNode->left = nullptr;
//     newNode->right = nullptr;

//     if (root == nullptr) {
//         *root = newNode;
//     }

// }

Node* createNode(int val) 
{
    Node* newNode = new Node();
    newNode->data = val;
    newNode->left = nullptr;
    newNode->right =  nullptr;
    return newNode;
}

void inorder(Node* root) 
{
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(Node* root) 
{
    if (root == nullptr) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root)
{
    if (root == nullptr) return;
    cout << root->data << " ";
    postorder(root->left);
    postorder(root->right);
}

int main()  {
    Node* root = createNode(10);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(5);
    root->left->right = createNode(4);

    postorder(root);

    return 0;
    
}