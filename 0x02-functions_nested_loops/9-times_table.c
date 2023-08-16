#include "main.h"
/**
 * times_table - a function that prints the times table, starting with 0
 * Description : function that prints the 9 times table, starting with 0
 * Return: zero
 *
 */

void times_table(void)
{
#include "main.h"
/**
 * times_table - a function that prints the times table, starting with 0
 *@yoyo: number start from
 * @loka: function to calculate the time table
 * Description : function that prints the 9 times table, starting with 0
 * Return: zero
 *
 */

void times_table(void)
{
int n;
int yoyo;
int loka;
for (n = 0 ; n <= 9 ; n++)
{
for (yoyo = 0 ; yoyo <= 9 ; yoyo++)
{

loka = n * yoyo;
printf("%d", loka);

if (yoyo < 9)
{
printf(",\t");

}
}
printf("\n");
}



}



}

