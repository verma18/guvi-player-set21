#include<stdio.h>
void main()
{
    int n,k,temp;
    scanf("%d %d",&n,&k);
    int arr[n],j,i;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    i=0;
    for(j=1;j<=k;j++)
    {i=i%n;

            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;


    i++;}
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    }




