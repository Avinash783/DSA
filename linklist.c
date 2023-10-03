#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student 
{
 int rollno;
 char name[20];
 double marks;
 struct student *next;
 };
 

int main()
{
struct student *p=(struct student*)malloc(sizeof(struct student));

p->rollno=101;
strcpy(p->name,"abc");
p->marks=60;

p->next =(struct student*)malloc(sizeof(struct student));
p->next->rollno=102;
strcpy(p->next->name,"pqr");
p->next->marks=65;
p->next->next=NULL;

printf("%d\t%s\t%lf\n",p->rollno,p->name,p->marks);
printf("%d\t%s\t%lf\n",p->next->rollno,p->next->name,p->next->marks);




return 0;

}

/*
OUTPUT:
hpcsap@hpcsap-DIT400TR-55L:~/Desktop/dsa$ gcc linklist.c
hpcsap@hpcsap-DIT400TR-55L:~/Desktop/dsa$ ./a.out
101	abc	60.000000
102	pqr	65.000000
hpcsap@hpcsap-DIT400TR-55L:~/Desktop/
*/
