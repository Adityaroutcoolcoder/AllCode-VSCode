#include<stdio.h>
void main ()
{
    char str1[30],str2[30];
    int i,j;
    printf("enter 2 string");
    scanf("%s%s",str1,str2);
    for(i=0;str1[i]!='\0';i++)
    {

    }
    for(j=0;str2[j]!='\0';j++)
    
    {
     str1[i]=str2[j];
     i++;
    }
    
    str1[i] = '\0';
    printf("%s",str1);
}