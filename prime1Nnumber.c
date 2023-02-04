#include<stdio.h>
void main()
{
    int n ,k,i ,flag,p;
    printf("enter the number ");
    scanf("%d",&n);
    if(n==0||n==1)
{
    flag=1;
}
for(k=2;k<=n;k++)
{
p=k;
flag=0;
for ( i = 2;  i<p; i++)
{
    if(p%i==0)
    {
        flag=1;
    }
}
    if(flag==0)
    printf("%d ",k);

}

}



