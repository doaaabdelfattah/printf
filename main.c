#include "main.h"
#include <stdio.h>
int main(void)
{
int len1, len2;
len1 = printf("%%\n");
len2 =_printf("%%\n");
printf("len1: %i len2 %i", len1, len2);
return (0);
}
