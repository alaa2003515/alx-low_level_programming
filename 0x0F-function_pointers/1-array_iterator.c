#include <stdio.h>
#include "function_pointers.h"


/**
 * array_iterator-fun executes a fun given as a par on each element of an array
 *@array:arry of number______
 *@size:size of memory______
 *@action:mathmetical operation______
 * Return: returns always (0) ______
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
int *endfunction = array + size;
if ((array != NULL) && size && (action != NULL))

{

do {
action(*array++);
} while (array < endfunction);


}

}
