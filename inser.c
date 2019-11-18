#include<stdio.h>

int insertion_sort(int array[],int len)
{
int i,j,temp;
for(i=1;i<len;i++)
 {
  j=i;
  while(j>0)
   {
     if(array[j]<array[j-1])
     {
       temp=array[j-1];
       array[j-1]=array[j];
       array[j]=temp;
    }
   j--;
  }
}
}
int main()
{
int len;
int array[100];
printf("enter the number of elements of array:\n");
scanf("%d",&len);
printf("enter the elements of array\n");
for(int i=0;i<len;i++)
  {
     scanf("%d",&array[i]);
  }
insertion_sort(array,len);
for(int i=0;i<len;i++)
  {
    printf("%d \t",array[i]);
  }
}
