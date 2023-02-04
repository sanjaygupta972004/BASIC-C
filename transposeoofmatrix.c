#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10];
    int i,j,m,n;
    printf("enter the row and colum of matrix a");
    scanf("%d%d",&m,&n);
    printf("enter the elements of matrix a");
    for (i  = 0; i < m; i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    printf("transopose of matrix\n");
    for (i =0; i< m; i++)
    {
    for(j=0;j<n;j++)
{
    printf("%d",a[j][i]);
} 
printf("\n");
    }
}