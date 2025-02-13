#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the size of various types on the computer it runs on.
 * Return: Always 0 (Success)
 */
int main(void)
{
long long ll;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ll));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
