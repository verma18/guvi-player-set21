#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[26],b[26],i,l,k;
    int m1,m2,k1,k2;
    char s[10000];
    gets(s);
    l=strlen(s);
    for(i=0;i<26;i++)
        a[i]=0;
    for(i=0;i<l;i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            k=s[i]-65;
            a[k]+=1;
        }
        else{
            k=s[i]-97;
            a[k]+=1;
        }
    }
    m1=a[0];
    k1=0;
    for(i=0;i<26;i++)
    {
        if(m1<a[i])
        {
            m1=a[i];
            k1=i;
    }}


        printf("%c",k1+97);
    }



doubt

