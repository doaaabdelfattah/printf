#include "main.h"
/**
* my_p_perc - print %
* @c: arg
* Return: int
*/
int my_p_perc(char c)
{
return (write(1, &c, 1));
}
/**
* handle_zero - if number is 0
* @str: string
* Return: int
*/
int handle_zero(char *str)
{
str[0] = '0';
str[1] = '\0';
return (write(1, str, 1));
}
/**
* get_length - get length
* @num: arg
* Return: len
*/
int get_length(int num)
{
int tmp, len;

len = 0;
tmp = num;
if (tmp == 0)
return (1);
else
{
if (tmp < 0)
{
if (tmp == INT_MIN)
tmp = -(tmp + 1);
else
tmp = -(tmp);
}
while (tmp > 0)
{
tmp /= 10;
len++;
}
return (len);
}
}

