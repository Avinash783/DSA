#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node
{
int date;
struct node *next;
};
void addatend(struct node **phead, int val)
{
struct node*trav;
struct node *temp=(struct node*)malloc(sizeof(struct node));
temp->date=val;
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
void display(struct node *head)
{
struct node *trav=head;

while(trav!=NULL)
{
printf("%d ",trav->date);
trav=trav->next;
}
printf("\n");
}

int main()
{
struct node*head=NULL;
addatend(&head,11);
addatend(&head,2);
addatend(&head,45);
addatend(&head,32);
addatend(&head,11);

display(head);
return 0;
}

/*
OUTPUT:
hpcsap@hpcsap-DIT400TR-55L:~/Desktop/dsa$ gcc node.c
hpcsap@hpcsap-DIT400TR-55L:~/Desktop/dsa$ ./a.out
11 2 45 32 11 
*/
