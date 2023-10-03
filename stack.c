#include<stdio.h>
struct stack
{
int size;
int arr[100];
int top;
};

void init (struct stack*s)
{
(*s).size=5;
(*s).top=1;
}
int isfull(struct stack *s)
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

int main()
{
struct stack s1;
init(&s1);
push(&s1,10);
push(&s1,20);
push(&s1,30);
printf("%d\n",pop(&s1));
printf("%d\n",pop(&s1));
printf("%d\n",pop(&s1));
printf("%d\n",pop(&s1));

return 0;
}

/*
hpcsap@hpcsap-DIT400TR-55L:~/Desktop/dsa$ gcc stack.c
hpcsap@hpcsap-DIT400TR-55L:~/Desktop/dsa$ ./a.out
30
20
10
0
hpcsap@hpcsap-DIT400TR-55L:~/Desktop/dsa$ 

*/
