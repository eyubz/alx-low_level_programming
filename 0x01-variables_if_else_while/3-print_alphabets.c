#include<stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lower = 'a', upper = 'A';
while (lower <= 'z')
{
putchar(lower);
lower++;
}
while (upper <= 'Z')
{
putchar(upper);
upper++;
}
putchar('\n');
return (0);
}
