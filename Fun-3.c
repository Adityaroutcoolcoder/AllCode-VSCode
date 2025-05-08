#include<stdio.h>
int sum();
void main()
{
    int z;
    z = sum();
    printf("The Result Is %d",z);
}
int sum()
{
    int m,n,res;
    printf("Enter Two Number");
    scanf("%d%d",&m,&n);
    res = m+n;
    return res;
}