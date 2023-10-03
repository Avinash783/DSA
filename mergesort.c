#include<stdio.h>

int temp[100];
int arr[100];

void merging(int mid,int lower,int upper)
{
    int i,j,k=lower;
    
    for(i=lower, j=mid+1; i<=mid&& j<=upper; k++)
    {
       if(arr[i]<arr[j])
       temp[k]=arr[i++];
       else if(arr[i]>arr[j])
       temp[k]=arr[j++];
       }
      while(i<=mid)
      temp[k++]=arr[i++];
      
      while (j<=upper)
      temp[k++]=arr[j++];
      
      for(i=lower; i<=upper; i++)
      arr[i]=temp[i];
      }
      
      void mergesort(int lower, int upper)
       
       {
      int mid;
      if(lower<upper )
      {
      mid=(lower+upper)/2;
      mergesort(0,mid);
      mergesort(mid+1,upper);
      merging(mid,lower,upper);
      }
      
      }

int main()
{
int n, i, j;

printf("how many element ?");
scanf("%d",&n);

printf("enter array element \n");
for(i=0; i<n; i++)
scanf("%d",&arr[i]);

mergesort(0, n-1);

for(i=0; i<n; i++)
printf("%d "  ,arr[i]);

printf("\n");

return 0;
}

/*
OUTPUT:
hpcsap@hpcsap-DIT400TR-55L:~/Desktop/dsa$ ./a.out
how many element ?4
enter array element 
3
7
5
9

*/
