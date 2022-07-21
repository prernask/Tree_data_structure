// C++ program to check if a given tree is BST.
#include <bits/stdc++.h>
using namespace std;
   
/* A binary tree node has data, pointer to
left child and a pointer to right child */
struct Node
{
    int data;
    struct Node* left, *right;
       
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
int isBST(struct Node* node)
{
if (node == NULL)
	return 1;
	
/* false if left is > than node */
if (node->left != NULL && node->left->data > node->data)
	return 0;
	
/* false if right is < than node */
if (node->right != NULL && node->right->data < node->data)
	return 0;

/* false if, recursively, the left or right is not a BST */
if (!isBST(node->left) || !isBST(node->right))
	return 0;
	
/* passing all that, it's a BST */
return 1;
}
int main()
{
    struct Node *root = new Node(3);
    root->left     = new Node(2);
    root->right     = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(4);
   
    if (isBST(root))
        cout << "Is BST";
    else
        cout << "Not a BST";
   
    return 0;
}


// This code is contributed by shubhamsingh10
