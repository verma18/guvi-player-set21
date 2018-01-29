#include<stdio.h>
#include<stdlib.h>
void main()
{
    char s[100000],c[100000],b[100000];
    int i,l,j=0;
    gets(s);


    l=strlen(s);
    for(i=0;i<l;i++)
        b[i]=s[i];
    for(i=l-1;i>=0;i--)
    {
        if(b[i]!='a' &&b[i]!='A' &&b[i]!='e' &&b[i]!='E' &&b[i]!='i' &&b[i]!='I' &&b[i]!='o' &&b[i]!='O' &&b[i]!='u' &&b[i]!='U')
        {
        c[j]=b[i];
        j++;
    }
    }
    for(i=0;i<j;i++)
        printf("%c",c[i]);


}
