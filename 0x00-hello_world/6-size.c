
#include <stdio.h>
/**
 * main - Entry point
 * 
 * Description: ' a C program that prints the size of various types on the computer it is compiled and run on'
 * 
 * Return: Always 0 (Success)
 */
int main(void) {
  printf("Type:char,Storage size is:%zu \n", sizeof(char));
 printf("Type:unsigned char,Storage size is:%zu \n",sizeof(unsigned char ));
 printf("Type:short,Storage size is:%zu \n", sizeof (short));
 printf("Type:unsigned short,Storage size is:%zu \n",sizeof (unsigned short));
 printf("Type:int,Storage size is:%zu \n", sizeof(int));
 printf("Type:unsigned int,Storage size is:%zu \n", sizeof (unsigned int));
 printf("Type:long,Storage size is:%zu \n", sizeof (long));
 printf("Type:unsigned long,Storage size is:%zu \n",sizeof (unsigned long));
 
    return 0;
}
