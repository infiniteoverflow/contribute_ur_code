#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *left;
  struct node *right;
};
typedef struct node* Node;
Node newNode(int item)
{
  Node temp = (Node)malloc(sizeof(struct node));
  temp->data=item;
  temp->left=temp->right=NULL;
  return temp;
}
Node insert(Node node,int key)
{
  if(node == NULL)
    return newNode(key);
  if(key < node->data)
    node->left=insert(node->left,key);
  if(key > node->data)
    node->right = insert(node->right,key);
  return node;
}
int search(Node root,int key)
{
  if(root==NULL)
    return -1;
  if(root->data==key)
    return 1;
  if(root->data<key)
    return search(root->right,key);
  return search(root->left,key);
}
void inorder(Node root)
{
  if(root!=NULL)
  {
    inorder(root->left);
    printf("%d\t",root->data);
    inorder(root->right);
  }
}
void preorder(Node root)
{
  if(root!=NULL)
  {
    printf("%d\t",root->data);
    preorder(root->left);
    preorder(root->right);
  }
}
void postorder(Node root)
{
  if(root!=NULL)
  {
    postorder(root->left);
    postorder(root->right);
    printf("%d\t",root->data);
  }
}
int main()
{
  int n,i,ch,ch1,key,pos;
  Node root=NULL;
  while(1)
  {
    printf("\nEnter your choice\n1:Create BST\n2:Traversal\n3:Search for key\n4:Exit");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:printf("\nEnter the no. of nodes in the BST\n");
             scanf("%d",&n);
             for(i=1;i<=n;i++)
             {
               printf("\nEnter the element to be inserted\n");
               scanf("%d",&key);
               root=insert(root,key);
             }
             break;
      case 2:printf("\nEnter your choice\n1:Preorder\n2:Inorder\n3:Postorder");
             scanf("%d",&ch1);
             if(ch1==1)
              preorder(root);
             else if(ch1==2)
              inorder(root);
             else
              postorder(root);
             break;
      case 3:printf("\nEnter the key to be searched\n");
             scanf("%d",&key);
             pos=search(root,key);
             if(pos==-1)
              printf("\nKey is not found\n");
             else
              printf("\nKey is found\n");
             break;
      case 4:exit(0);
    }
  }
  return 0;
}