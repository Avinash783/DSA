#include<stdio.h>
struct stack
{
int size;
int arr[100];
int top;
};

void init (struct stack*s)
{
(*s).size=50;
(*s).top=1;
}
/*int isfull(struct stack *s)
{
if((*s).top==(*s).size-1)
return 1;
else
return 0;
}

int isempty(struct stack*s)
{
if((*s).top==-1)
return 1;
else
return 0;
}

void push(struct stack *s, int val)
{
if(!isfull(s))
{
(*s).top++;
(*s).arr[(*s).top]=val;
}
else
printf("stack is full!");
}

int pop(struct stack *s)
{
int temp=-1;
if(!isempty(s))
{
temp=(*s).arr[(*s).top];
(*s).top--;
}
else
printf("stack is empty!");
return temp;
}
*/
int main()
{
int num ;
struct stacks1;
init(&s1);

printf("enter amount :\n");
scanf("%d",&num);
while(num>0)
{
push(&s1,num%2);
num=num%2;
}
while(!isempty(&s1))
{
printf("%d",pop(&s1));
}
printf("/n");
return 0;
}











return 0;
}
