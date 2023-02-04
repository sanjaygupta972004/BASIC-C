# include <stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],res[10][10];
int i,j,k,p,q,m,n;
printf("enter the row and colum of matrix a");
scanf("%d%d",&p,&q);
printf("enter the elements of matrix a:");
for(i=0;i<p;i++)
for(j=0;j<q;j++)
    scanf("%d",&a[i][j]);
printf("enter row and colum of 2matrix");
scanf("%d%d",&m,&n);
if(q!=m)
    printf("matrix is not posssible");
else{
printf("enter the elements matrix:b");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
    scanf("%d",&b[i][j]);
for(i=0;i<p;i++)
for(j=0;j<n;j++)
{
res[i][j]=0;
for(k=0;k<n;k++)
    res[i][j]+=a[i][k]*b[k][j];
}
printf("multiply of matrix/n");
for(i=0;i<p;i++)
{
for(j=0;j<n;j++)
{
    printf("%d ",res[i][j]);
}
printf("\n");
}
}
}