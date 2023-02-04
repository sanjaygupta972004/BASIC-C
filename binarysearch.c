#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,arr[10],key;
     printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the array allement");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the key word ");
    scanf("%d",&key);
    int f,l,mid;
    f=0;
    l=n-1;
    mid=(f+l)/2;
    while(f<l)
    {
        if(arr[mid]<key)
        f=mid+1;
        else if (arr[mid]==key)
        {
        printf("number is found%d is index%d",key,mid+1);
        break;
        }
        else
        l=mid-1;  
    }
    if(l<f)
    printf("number is not found");
}
    
