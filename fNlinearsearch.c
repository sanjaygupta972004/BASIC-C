#include<stdio.h>
#include<conio.h>
 min(int arr[],int n);
void main()
{
    int i,n,arr[10];
     printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the array allement");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
  int x= min(arr,n);
  printf("number is found%d is %d",x,i);
}
int min(int list[],int n)
{int i;
int num;
printf("enter the number ");
scanf("%d",&num);
for(i=1;i<n;i++)
    if(num==list[i])
return num;
}