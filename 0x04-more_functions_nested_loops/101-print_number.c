#include "main.h"

/**
 *print_number - A function that prints an integer.
 *@nUmBeR: num_ber to start________
 * Return: returns always (0) ______
 */



void print_number(int nUmBeR)
{
unsigned int koko = nUmBeR;

if (nUmBeR < 0)
{

nUmBeR *= -1;
koko = nUmBeR;
_putchar(45);
}

koko /= 10;
if (koko != 0)
{
_putchar(koko);
}
_putchar((unsigned int) nUmBeR % 10 + '0');


}
