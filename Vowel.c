#include<stdio.h>
#include<conio.h>
int main()
{
char ch;
printf("Enter a character\n");
scanf("%c", &ch);
if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U')
printf("the character is a vowel\n", ch);
else
printf("the character is a consonant\n", ch);
return 0;
}
