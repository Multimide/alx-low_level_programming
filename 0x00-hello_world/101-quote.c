#include <stdio.h>
#include <unistd.h>

/**
 *main - This is a code that prints a string using
 *the write function
 *Description: 'and that piece of art is useful - Dora Korpar, 2015-10-19'
 *Return: Always 0 (Sucess)
 */
int main(void)
{
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
