#ifndef main_h
#define main_h
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stddef.h>

/* Prototypes for _printf */
int output(char *str, int bytes);
int output_1(char c);
int _printf(const char *format, ...);
int get_function(char sp, va_list list);
int p_string(char *str);
int p_char(char c);
int p_percent(char c);

/* Prototypes for Myprintf */
/**
 * struct specifier - Short description
 * @sp: char
 * @func: function pointer
 */
typedef struct specifier
{
char sp;
int (*func)(va_list);
} sp_t;

int myprintf(const char *format, ...);
int (*get_func_print(char c))(va_list);
int my_p_char(va_list arglist);
int my_p_string(va_list arglist);


#endif
