#include<stdio.h>
#include<conio.h>

void bubblesrt(int list[],int n )
{
    int k,temp,j;
    for(k=0;k<n-1;k++)
    for(j=0;j<n-k-1;j++)
        if(list[j]>list[j+1])
        { 
temp=list[j];
list[j]=list[j+1];
list[j+1]=temp;
    }
}
void main()

{
    int n,i,arr[15];
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the array allement");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubblesrt(arr,n);
    printf("shorted array");
      for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
