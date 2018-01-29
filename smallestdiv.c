#include<stdio.h>
void main()
{
    int l,i,r;
    scanf("%d %d",&l,&r);
    if(l>r)
    i=l;
    else
        i=r;
    while(1)
    {

        if(i%l==0 && i%r==0)
        {
            printf("%d",i);
            break;
        }
        i++;
    }
}
