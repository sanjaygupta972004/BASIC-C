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
  printf("%d",x);
}
int min(int list[],int n)
{int min,i;
min=list[0];
for(i=1;i<n;i++)
if(min>list[i])
{
    min=list[i];
}
return min;

}