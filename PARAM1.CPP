#include<stdio.h>
#include<conio.h>

void main()
{
  int n;
  clrscr();
  printf("Enter a value:");
  scanf("%d",&n);
  if (n%7==0)
     printf("d is divisible by 7.\n",n);
 else
     printf("%d is not divisible by 7.\n",n);
 (n%7==0)?printf("%d is divisible by 7.\n",n):printf("%d is not divisible by 7.\n",n);
 getch();
 }





