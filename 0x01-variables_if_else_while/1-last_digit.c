#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
 
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
int yoyo=n%10;
if (yoyo>5)
{
printf("%d and is greater than 5\n", yoyo);
}

else if (6>yoyo && yoyo!=0)
{
printf("%d and is less than 6 and not 0\n", yoyo);
}
else
{
printf("%d and is 0\n", yoyo);
}

return (0);
}
