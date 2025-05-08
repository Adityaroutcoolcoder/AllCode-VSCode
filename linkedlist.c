#include<stdio.h>
void main()
{
    char str1[30],str2[30];
    printf("enter a string");
    scanf("%s",str1);
    strcpy(str2,str1);
    strrev(str1);
    if(strcmp(str1,str2))
    printf("string is not palindrome");
    else
    printf("string is palindrome");
}