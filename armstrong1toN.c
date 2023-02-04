#include<stdio.h>
#include<math.h>
void main()
{
    int  cout,sum;
    int n,i,t,k;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        t=i;
        cout=0;
        while(t>0)
        {
        cout++;
        t=t/10;
        }
        sum=0;
        t=i;
        for(k=0;k<cout;k++)
{sum+=pow((t%10),cout);
t=t/10;
} 
if(sum==i)
    printf("%d\n",i);


}
}
