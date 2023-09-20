#include "main.h"

/**
*_printf - print output
*@format: pointer to text
*Return: int
*/
	int _printf(const char *format, ...)
{
	int i, count;
	int (*operation)(va_list);
	va_list arglist;

	va_start(arglist, format);
	i = 0;
	if (format == NULL || (format[i] == '%' && format[i + 1] == '\0'))
{
	return (-1);
}
	else
{
	count = 0;
	for (; format && format[i] != '\0' ; i++)
{
	if (format[i] != '%')
{
	output_1(format[i]);
	count++;
	}
	else
	{
	{
	i++;
	if (format[i] == '%')
	count += my_p_perc('%');
	else
{
	operation = get_func_print(format[i]);
	if (operation)
	count += operation(arglist);
	else if (operation == NULL)
{
	count++;
	output_1('%');
}}}}}}
	va_end(arglist);
	return (count);
}
