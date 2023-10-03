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
     


void Remove(struct node **proot,int date)
{
struct node * t=*proot, *p=*proot;
struct node *trav=*proot;
struct node *tr;
while(1)
{
if(trav->date==date)
{
     t=trav;
     break;
}
else if(trav->date>date)
      {
      p=trav;
      trav=trav->left;
      }
else if(trav->date<date)
         {
         p=trav;
         trav=trav->right;
         }  
     }

if(t->left!=NULL && t->right!=NULL)

{
tr=t;
p=t;
t=t->right;

while(t->left!=NULL)
{
p=t;
t=t->left;
}
tr->date=t->date;
}

if(t->left==NULL && t->right==NULL)

{
  if(p->left==t)
  p->left=NULL;
  else if(p->right==t)
  p->right=NULL;
  }

else if(t->left!=NULL && t->right==NULL)
  {
  if(p->left==t)
     p->left=t->left;
  else if(p->right==t)
     p->right=t->right;
     
  }
    free(t);
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
     Remove(&root,30);
     inorder(root);
     printf("\n");
     return 0;
     }
     
     
     /*
     OUTPUT:
              hpcsap@hpcsap-DIT400TR-55L:~/Desktop/dsa$ gcc treedelete.c
             hpcsap@hpcsap-DIT400TR-55L:~/Desktop/dsa$ ./a.out
              13  23  24  30  50  
              13  23  24  50  
             hpcsap@hpcsap-DIT400TR-55L:~/Desktop/dsa$ 
          */
