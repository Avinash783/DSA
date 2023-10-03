#include<stdio.h>
void selectionsort(int *arr, int n)
   {
       int i,j,temp;
       for(i=0; i<n-1; i++)
         { 
 
           for (j=i+1; j<n; j++)
                 {
   
                  if(arr[i]>arr[j])
                    {
        
                      temp=arr[i];
                      arr[i]=arr[j];
                      arr[j]=temp;
                 
                      }
                 }
                
             }
       }
  int binarysearch(int *arr, int val,int n)
  
  {
       int lower, upper,mid ,index=-1;
            lower=0;
            upper=n-1;
  
  
  while(lower<=upper)
  {
       mid=(lower+upper)/2;
  
       if(arr[mid]==val)
  
       {
       index=mid;
        break;
       }
  
  else if(arr[mid]>val) 
  
     {
       upper=mid-1;
     }
    
  else if(arr[mid]<val)
     {
        lower=mid+1;
     }
     
   }
       return index;
  }
  int main()
  {
  int arr[100],n,i,val,index;
  printf("how many integers?:\n");
  scanf("%d",&n);
  printf("enter integer\n");
  
  for(i=0; i<n; i++)
    scanf("%d",&arr[i]);
  
  printf("enter element to be searched:\n");
  scanf("%d",&val);
  
  selectionsort(arr,n);
  index=binarysearch(arr,n,val);
  
  if(index!=-1)
             printf("element found at index %d \n",index);
  
      else
              printf("element not fount\n");
  
  return 0;
  }
  
  /*
  OUTPUT:
  hpcsap@hpcsap-DIT400TR-55L:~/Desktop/dsa$ gcc selectionbinarysearch.c
hpcsap@hpcsap-DIT400TR-55L:~/Desktop/dsa$ ./a.out
how many integers?:
6
enter integer
8
3
4
5
6
9
enter element to be searched:
5
element found at index 3 
*/
