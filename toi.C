#include<stdio.h>
#include<conio.h>
#include<math.h>
int count=0;
void tower( int n,char src, char intr, char des)
    {
      if(n)
        {
          tower(n-1,src,des,intr);
          printf("disk %d moved from %c to %c\n",n,src,des);
          count++;
          tower(n-1,intr,src,des);
        }
    }
void main()
  {
    int n;
    printf("enter the number of disks\n");
                scanf("%d",&n);
                tower(n,'a','b','c');
                printf("number of moves taken to move disks from source to destination %d",count);
                  count=0;
  }             