# include <stdio.h>
#include<conio.h>
void main()
{
int a[10];
int i,n,p=-0;
printf("enter the elements of a:");
for(i=0;i<4;i++)
{
    scanf("%d",&a[i]); 
}
printf("enter the searching element :");
scanf("%d",&n);
for(i=0;i<4;i++)
{
    if(n==a[i])
    printf("number%dis position%d",n,i);
}
}

