
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("Add , Subtract , Multiply , Divide 2 Numbers.");
scanf("%d %d" , &a,&b);
c=a+b;
printf("%d+%d=%d\n" , a,b,c);
c=a-b;
printf("%d-%d=%d\n" , a,b,c);
c=a*b;
printf("%d*%d=%d\n" , a,b,c);
c=a/b;
printf("%d/%d=%d\n" , a,b,c);
getch();
}

