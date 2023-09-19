#include "main.h"

/**
* my_p_int - print int
* @arglist: argument
* Return: count
*/
int my_p_int(va_list arglist)
{
int num, len, flag, reminder, i, min_num;
char *str;

flag = 0;
min_num = 0;
num = va_arg(arglist, int);
len = get_length(num);
if (num < 0)
{
if (num == INT_MIN)
{num = -(num + 1);
min_num = 1;
}
else
num = -(num);
flag = 1;
}
str = (char *)malloc(sizeof(char) * (len + flag + 1));
if (num == 0)
return (handle_zero(str));
else
{
for (i = len + flag - 1; num > 0; i--)
{
if (min_num == 1 && i == len)
{reminder = num % 10;
str[i] = reminder + 1 + '0';
num = num / 10; }
else
{reminder = num % 10;
str[i] = reminder + '0';
num = num / 10; }}
if (flag == 1)
str[i--] = '-';
str[len + flag] = '\0';
write(1, str, len + flag);
free(str);
return (len + flag); }}

