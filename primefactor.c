#include<stdio.h>
void main()
{
    int i,j,n,count;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {count=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
             count++;
            }

        }
        if(count==1)
        {
            if(n%i==0)
                printf("%d ",i);
        }

    }
}
