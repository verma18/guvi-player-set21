#include<stdio.h>
void main()
{
    int arr[10000];
    int i,n,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    int a[max+1];
    for(i=0;i<=max;i++)
        a[i]=0;
    for(i=0;i<n;i++)
    {
        a[arr[i]]=a[arr[i]]+1;
    }
    for(i=0;i<=max;i++)
    {
        if(a[i]==1)
        {
            printf("%d",i);
            break;
        }
    }
}
