#include <stdio.h>
#include "function_pointers.h"


/**
 * int_index - a function that searches for an integer___________
 *@array:arry of number______
 *@size:size of memory______
 *@cmp:function does not return(0)______
 * Return: returns always (0) ______
 */

int int_index(int *array, int size, int (*cmp)(int))

{
int star;
int *endfunction = array + size;
if ((array != NULL) && size && (cmp != NULL))

{
for (star = 0; cmp(array[star]) < size; star++)
return (star);

}
return (-1);
}
