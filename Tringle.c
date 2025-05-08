#include<stdio.h>
void main()
{
    int i,j;
    char sy;
    printf("Enter Your Symbol ::");
    scanf("%c",&sy);
    switch(sy)
    {
        case '*':
        for(i=0;i<=4;i++)
        {
            for(j=0;j<=i;j++)
            {
                printf("*\t");
            }
            printf("\n");
        }
        break;

        case '+':
        for(i=0;i<=4;i++)
        {
            for(j=0;j<=i;j++)
            {
                printf("+\t");
            }
            printf("\n");
        }
        break;

        case '^':
        for(i=0;i<=4;i++)
        {
            for(j=0;j<=i;j++)
            {
                printf("^\t");
            }
            printf("\n");
        }
    }
}