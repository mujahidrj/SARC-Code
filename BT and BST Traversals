#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *left, *right;
} node;

node *create_node(int data)
{
  // calloc intializes the left and right ptr to null
  node *n = calloc(1, sizeof(node));
  n->data = data;

  return n;
}

// Returns pointer to node that has the data inside it
node *insert_BST(node *root, int data)
{
  if (root == NULL)
    return create_node(data);

  if (data < root->data)
    root->left = insert_BST(root->left, data);

  else if (data > root->data)
    root->right = BST_insert(root->right, data);

  else
    return root;
}

void print_preorder(node *root)
{
  if(root == NULL)
    return;

  printf("%d ", root->data);
  print_preorder(root->left);
  print_preorder(root->right);
}

void inorder(node *root)
{
  if(root == NULL)
  {
    return;
  }

  inorder(root->left);
  printf("%d", root->data);
  inorder(root->right);
}

int searchBT(node *root, int n)
{
  if (root == NULL)
    return 0;
  if (root->data == n)
    return 1;
  return searchBT(root->left, n) + searchBT(root->right, n);
}

int searchBST(node *root, int n)
{
  if (root == NULL)
   return 0;

  if (root->data == n)
   return 1;

  if (n < root->data)
   return searchBST(root->left, n) ;

  if (n > root->data)
   return searchBST(root->right, n);

}

// MLR
void printPreOrder(node *root)
{
  if (root == NULL)
    return;

  printf("%d", root->data);
  printInOrder(root->left);
  printInOrder(root->right);
}

// LMR
void printInOrder(node *root)
{
  if (root == NULL)
    return;

  printInOrder(root->left);
  printf("%d", root->data);
  printInOrder(root->right);
}

// LRM
void printPostOrder(node *root)
{
  if (root == NULL)
    return;

  printInOrder(root->left);
  printInOrder(root->right);
  printf("%d", root->data);
}
