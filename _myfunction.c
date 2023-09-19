#include "main.h"
/**
* output_1 - print char
* @c: char
* Return: number of characters
*/
int output_1(char c)
{
return (write(1, &c, 1));
}
/**
* get_func_print - functio
* @s: specifier
* Return: int
**/
int (*get_func_print(char s))(va_list)
{
sp_t fun_list[] = {
{'s', my_p_string},
{'c', my_p_char},
{'i', my_p_int},
{'d', my_p_int}};
int i;

i = 0;
while (fun_list[i].sp)
{
if (s == fun_list[i].sp)
return (fun_list[i].func);
i++;
}
return (NULL);
}
/**
* my_p_string - function
* @arglist: string
* Return: int
*/
int my_p_string(va_list arglist)
{
int len;

char *str = va_arg(arglist, char *);
len = 0;
while (str[len] != '\0')
len++;
return (write(1, str, len));
}
/**
* my_p_char - function
* @arglist: char
* Return: int
*/
int my_p_char(va_list arglist)
{
char c = va_arg(arglist, int);
return (write(1, &c, 1)); }
