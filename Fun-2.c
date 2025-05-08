#include<stdio.h>
void sum (int,int);
void main()
{
    int x,y;
    printf("enter two number");
    scanf("%d%d",&x,&y);
    sum(x,y);
}
void sum(int m,int n)
{
    int res;
    res = m+n;
    printf("The result is %d",res);
}