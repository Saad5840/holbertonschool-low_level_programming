#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100 with FizzBuzz rules.
 *
 * Return: 0 (Success)
 */


int main(void)
{
int i;

for (i = 1; i < 101; i++)
{
	if ((i % 15) == 0)
                printf("FizzBuzz ");

	else if ((i % 5) == 0)
		printf("Buzz ");

	else if ((i % 3) == 0)
                printf("Fizz ");

	else
		printf("%d ", i);
}
printf("\n");
return (0);
}
