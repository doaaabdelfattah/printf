#include "main.h"
/**
 * my_p_perc - print %
 * @c: argument
 * Return: int
 */
int my_p_perc(char c)
{
return (write(1, &c, 1));
}
/**
 * convert_int - convert int to string
 *
 *
 *
 */
void conver_int(int num, char* str, int base)
{
}


/**
 * my_p_int - print int
 * @arglist - argument
 * Return: count
 */
int my_p_int(va_list arglist)
{
int len;
char *str = itoa(va_arg(arglist, int));
len = 0;
while (str[len] != '\0')
len++;
return (write(1, str, len));
}
