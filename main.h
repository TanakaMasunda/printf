#ifndef PRINTF
#define PRINTF


#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/* print_nums */
int _printf(const char *format, ...);
int print_int(va_list l, flags_t *f);
void print_number(int n);
int print_unsigned(va_list l, flags_t *f);
int count_digit(init i);
int print_hex(va_list l, flags_t *f);
int print_hex_big(va_list l, flags_t *f;
int print_binary(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);
/* converter */
char *convert(unsigned long int num, int base, int lowercase);

/* _printf */
int _printf(const char *format, ...);

/* get_print */
int (*get_print(char s))(va_list, flags_t *);

/* get_flag */
int get_flag(char s, flags_t *f);

/* print_alpha */
int print_string(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);

/* write_funcs */
int _putchar(char c);
int _puts(char *str);

/* print_custom */
int print_rot13(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_bigS(va_list l, flags_t *f);
/* print_address */
int print_address(va_list l, flags_t *f);

/* print_percent */
int print_percent(va_list l, flags_t *f);

#endif
