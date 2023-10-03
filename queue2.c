#include<stdio.h>
struct cqueue
{
int size ;
int arr[100];
int rear,front;
};
void init(struct cqueue *cq)
{
cq->size=5;
cq->rear=cq->front=cq->size-1;
}

void insert(struct cqueue*cq, int  val)
{
if(!isfull(cq))
{
cq->rear=(cq->rear+1)%cq->size;
cq->arr[cq->rear]=val;
}
else
printf("circular queue is full!");
}
int Remove(struct cqueue *cq)
{
int temp=-1;
if(!isempty(cq))
{
cq->front=(cq->front+1)%cq->size;
temp=cq->arr[cq->front];
}
else
printf("circular queue is empty");
return temp;
}
int isfull(struct cqueue*cq)
{
if(cq->front==(cq->rear+1)%cq->size)
  return 1;
  else
  return 0;
  }
  int isempty(struct cqueue *cq)
  {
  if(cq->front==cq->rear)
  return 1;
  else
  return 0;
  }
  
  int main()
  {
  struct cqueue q1;
  init(&q1);
  
  insert(&q1,15);
  insert(&q1,30);
  insert(&q1,45);
  insert(&q1,12);
  
  printf("%d ",Remove(&q1));
  printf("%d ",Remove(&q1));
  printf("%d ",Remove(&q1));
  printf("%d ",Remove(&q1));
  return 0;
  }
  
  
  /*
  OUTPUT:
  hpcsap@hpcsap-DIT400TR-55L:~/Desktop/dsa$ ./a.out
   15 30 45 12
   */
  
  
