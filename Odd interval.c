#include <stdio.h>
#include <conio.h>
void main()
{
int num,m,n;
clrscr();
printf("the Odd Numbers in m and n:\n");
scanf("%d%d",&m&n); 
printf("print odd numbers in a m to n:\n");
for (num = m; num <= n; num++)
{
if (num % 2 == 1)
printf ("%d ",num);
}
getch();
}
