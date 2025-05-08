#include<stdio.h>
void main()
{
    char str1[30],str2[30];
    int i,j=0,k;
    printf("enter a string");
    scanf("%s",str1);
    for(i=0;str1[i]!='\0';i++);
    for(k=i-1;k>=0;k--)
    {
        str2[j]=str1[k];
        j++;
    }
    str2[j]='\0';
    printf("%s",str2);
}