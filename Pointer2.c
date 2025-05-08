#include<stdio.h>
void swap (int,int);
void main()
    {
      int x,y;
      printf("Enter Two Numbers");
      scanf("%d%d",&x,&y);
      printf("Before Swaping x=%d,y=%d\n",x,y);
      swap(x,y);
      printf("After Swaping x=%d,y=%d",x,y);
    }
    void swap(int m,int n)
    {
        int p;
        p = m;
        m = n;
        n = p;
        printf("%d%d\n",m,n);
    }

    
