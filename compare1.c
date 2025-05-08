#include<stdio.h>
void main()
{
    char str1[30],str2[30];
    int i,c=0;
    printf("enter 2 string");
    scanf("%s%s",str1,str2);
    for(i=0;str1[i]!='\0';i++)
    {
        for(i=0;str2[i]!='\0';i++)
    {
        if(str1[i]!=str2[i])
        {
           c++;
        }
    }
    }
    if(c==0)
    {
        printf("strings are same");
    }
    else
    {
        printf("strings are not same");
    }

}
