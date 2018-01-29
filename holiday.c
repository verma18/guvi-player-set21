#include<stdio.h>
#include<stdlib.h>
void main()
{
    char s[10];
    char *b="Saturday\0";
     
    gets(s);
    if(s==b)
        printf("Yes");
    else
        printf("No");
}
