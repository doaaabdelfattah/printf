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
