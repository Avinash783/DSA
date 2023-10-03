#include<stdio.h>
int linearsearch(int *arr,int n,int val)
{
int i;
for(i=0; i<n; i++)
{
 if(val==arr[i])
     return i;
     }
     return -1;
     }
     
     int main()
     {
     int arr[100],n,i,val,index;
     
     printf("how many integer?:\n");
     scanf("%d",&n);
     
     printf("enter integers\n");
     for(i=0; i<n;i++)
     scanf("%d", &arr[i]);
     
     
     printf("enter element to be search");
     scanf("%d",&val);
     
     index=linearsearch(arr,n,val);
     
     if(index!=-1)
     printf("element found %d\n",index);
     else
     printf("element not found\n");
     return 0;
     }
     
     
     /*hpcsap@hpcsap-DIT400TR-55L:~/Desktop/dsa$ gcc linearsearch.c
hpcsap@hpcsap-DIT400TR-55L:~/Desktop/dsa$ ./a.out
how many integer?:
5
enter integers
30
40
50
60
70
enter element to be search40
element found 1
*/
