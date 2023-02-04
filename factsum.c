include<stdio.h>
#include<conio.h>
void main()
{
    int i, fact=1,sum=0;
    int n;#
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum+=fact;
    
    printf("%d!+",sum);
}}