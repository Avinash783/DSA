#include<stdio.h>
struct queue
{
int size;
int arr[50];
int rear,front;
};
void init(struct queue*q)
{
q->size=10;
q->rear=q->front=-1;
}


void insert(struct queue *q, int val)
{
if(!isfull(q))
{
(q->rear)++;
q->arr[q->rear]=val;
}
else
printf("queue is full!");
}

int Remove(struct queue *q)
{
int temp=-1;
if(!isempty(q))
{
(q->front)++;
temp=q->arr[q->front];
}
else
{
q->rear=q->front=-1;
printf("queue is empty!");
}
return temp;

}

int isfull(struct queue *q)
{
if(q->rear==(q->size)-1)
return 1;
else
return 0;
}
int isempty(struct queue *q)
{
if(q->rear==q->front)
return 1;
else
return 0;
}
int main()
{
struct queue q1;
init(&q1);
insert(&q1, 10);
insert(&q1, 20);
insert(&q1, 30);
insert(&q1, 40);
printf("%d ",Remove(&q1));
printf("%d ",Remove(&q1));
printf("%d ",Remove(&q1));
printf("%d ",Remove(&q1));
printf("\n");
return 0;
}

/*
OUTPUT:
hpcsap@hpcsap-DIT400TR-55L:~/Desktop/dsa$ gcc queue.c
queue.c: In function ‘insert’:
queue.c:17:5: warning: implicit declaration of function ‘isfull’ [-Wimplicit-function-declaration]
   17 | if(!isfull(q))
      |     ^~~~~~
queue.c: In function ‘Remove’:
queue.c:29:5: warning: implicit declaration of function ‘isempty’ [-Wimplicit-function-declaration]
   29 | if(!isempty(q))
      |     ^~~~~~~
hpcsap@hpcsap-DIT400TR-55L:~/Desktop/dsa$ ./a.out
10 20 30 40 
hpcsap@hpcsap-DIT400TR-55L:~/Desktop/dsa$ 

*/
