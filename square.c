#include<stdio.h>
#include<math.h>
void main()
{
    long int n,sqre=0;
    scanf("%ld",&n);
    while(n>0)
    {
        sqre=sqre+pow(n%10,2);
        n=n/10;
    }
    printf("%ld",sqre);

}
