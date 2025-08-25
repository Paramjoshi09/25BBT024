#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,l,s;
clrscr();
printf("enter three numbers,");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
 l=a ; s=a;
 }
 else
 {
 l=b ;s=a;
 }
 if(c>l)
 l=c;
 if(c<s)
   s=c;
 if(l==s)
    printf("All values are same.");
 else
    printf("%d > %d.",l,s);
 getch();
 }
