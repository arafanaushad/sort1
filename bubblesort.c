#include<stdio.h>
int bubble_sort(int array[],int len)
{
  int temp,i,j;
  for(i=0;i<len;i++)
	{
          for(j=0;j<len-1-i;j++)
             {
              if(array[j]>array[j+1])
		{
			temp=array[j];
			array[j]=array[j+1];
			array[j+1]=temp;
                }
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
bubble_sort(array,len);
for(int i=0;i<len;i++)
{
   printf("%d \t",array[i]);
}
}
