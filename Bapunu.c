#include <stdio.h>
#include <string.h>
void main()
{
    int n;
    char str1[30],str2[30];
    printf("enter two string");
    scanf("%s%s",&str1,&str2);
    n=strcmp(str1,str2);
    if(n==0)
    printf("two strings are equal"); 
    else
    printf("two strings are not equal");
}