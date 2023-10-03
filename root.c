#include<stdio.h>
#include<stdlib.h>

struct node
{
int date;
struct node *left,*right;
};

void insert(struct node **proot,int val)

{
struct node *trav=NULL;
struct node *temp=(struct node*)malloc(sizeof(struct node));
temp->date=val;
temp->left=temp->right=NULL;

if(*proot==NULL)
    
    *proot=temp;
    
  else
  {
  trav=*proot;
  while(1)
  {
   if(trav->date>temp->date)
   {
   if(trav->left==NULL)
   {
   trav->left=temp;
   break;
   }
   else
   trav=trav->left;
   }
   else if(trav->date<temp->date)
   {
   if(trav->right==NULL)
   {
   trav->right=temp;
   break;
   }
   else
     trav=trav->right;
     }
     else
     break;
     }
     }
     }
     void inorder(struct node *trav)
     {
     if(trav!=NULL)
     {
     inorder(trav->left);
     printf("%d  ",trav->date);
     inorder(trav->right);
     }
     }
     int main()
     {
     struct node *root=NULL;
     insert(&root, 50);
     insert(&root, 24);
     insert(&root, 30);
     insert(&root, 13);
     insert(&root, 23);
     inorder(root);
     printf("\n");
     return 0;
     }
     
