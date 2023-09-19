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
* my_p_int - print int
* @arglist - argument
* Return: count
*/
int get_length(int num)
{
    int tmp, len;
    tmp = num;
    while(tmp/= 10)
	    len++;
    return(len);
}
int my_p_int(va_list arglist)
{
    int num, len, flag, reminder, i;
    char str[20];
    flag = 0;
    num = va_arg(arglist, int);
    len = get_length(num);

    if (num < 0)
    {
        num = -(num);
        flag = 1;
    }

    for (i = len; num != 0; i--)
    {
        reminder = num % 10;
        str[i] = reminder + '0';
        num = num / 10;
    }
    if (flag == 1)
        str[i--] = '-';

    str[len+flag] = '\0';

    return (write(1, str, (len + flag)));
}
