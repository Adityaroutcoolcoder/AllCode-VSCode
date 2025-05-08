#include<stdio.h>
int sum(int,int);
void main()
{
    int x,y,z;
    printf("enter two number");
    scanf("%d%d",&x,&y);
    z = sum(x,y);
    printf("the result is %d",z);
}
int sum(int m,int n)
{
    int res;
    res = m+n;
    return res;
}
