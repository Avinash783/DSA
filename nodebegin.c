#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
};
void addatand(struct node **phead, int val)
{
struct node*trav;
struct node *temp=(struct node*)malloc(sizeof(struct node));
temp->data=val;
temp->next=NULL;

if((*phead)==NULL)
{
*phead=temp;
}
else
{
trav=*phead;
while(trav->next!=NULL)
{
trav=trav->next;
}
trav->next=temp;
}
}


void addatbegin(struct node **phead, int val)
{
struct node *temp=(struct node *)malloc(sizeof(struct node));
temp->data=val;
temp-> next=NULL;

if(*phead==NULL)
{
 *phead=temp;
 
}

else
{

temp->next=*phead;
*phead=temp;
}
}


void display(struct node *head)
{
struct node *trav=head;
while(trav!=NULL)
{

printf("%d  ",trav->data);
trav=trav->next;
}
printf("\n");
}


int main()
{
struct node*head=NULL;
addatand(&head, 11);
addatand(&head, 2);
addatand(&head, 45);
addatand(&head, 32);
addatand(&head, 11);
display(head);

addatbegin(&head, 100);

display(head);
return 0;
}


/*
OUTPUT:
hpcsap@hpcsap-DIT400TR-55L:~/Desktop/dsa$ gcc nodebegin.c
hpcsap@hpcsap-DIT400TR-55L:~/Desktop/dsa$ ./a.out
11  2  45  32  11  
100  11  2  45  32  11  
hpcsap@hpcsap-DIT400TR-55L:~/Desktop/dsa$ 

*/
