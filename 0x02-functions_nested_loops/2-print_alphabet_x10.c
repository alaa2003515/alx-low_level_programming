#include "main.h"

/**
 *  print_alphabet - prints lowercase alphabet 10 times
 * Description :function that prints 10 times the alphabet in lowercase
 * Return: Always 0 (Success)
 */


void print_alphabet(void)
{
int nolo;
int eng;
for (nolo = 0; nolo <= 10 ; nolo++)

{
for (eng = 'a'; eng <= 'z' ; eng++)
{
_putchar(eng);



}
_putchar('\n');
}
