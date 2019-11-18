#include<stdio.h>
int selection_sort(int array[],int len)
{
 int min,pos,i,j,temp;
 for(i=0;i<len;i++)
   {
     min=array[i];
     pos=i;
    for(j=i;j<len;j++)
     {
       
        if(min>array[j])
         {
            min=array[j];
            pos=j;
         }      
     }
     temp=array[i];
     array[i]=array[pos];
     array[pos]=temp;
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
selection_sort(array,len);
for(int i=0;i<len;i++)
  {
    printf("%d \t",array[i]);
  }
}
