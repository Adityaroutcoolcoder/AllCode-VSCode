#include<stdio.h>
void main()
{
    char str1[30],str2[30];
    int i,j=0,k;
    printf("enter a string");
    scanf("%s",str1);
    for(i=0;str1[i]!='\0';i++);
    for(j=i-1;j>=0;j--)
    {
        printf("%c",str1[j]);
    }
}