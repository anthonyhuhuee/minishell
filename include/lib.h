/*
** EPITECH PROJECT, 2022
** my librairie
** File description:
** library
*/

#ifndef MY_
    #define MY_

    #include <stdarg.h>
    #include <stdio.h>
    #include <stdlib.h>

int my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
int my_show_word_array(char * const *tab);

char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char *my_strdup(char const *src);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);

void my_swap(int *a, int *b);
void my_sort_int_array(int *tab, int size);
void percent_flag(void);

int check_flags(const char *format);
int my_printf(const char *format, ...);
int b_flag(int nb);
int o_flag(int nb);
int x_flag(int nb);
int x_flag_upcase(int nb);
int u_flag(int nb);
int p_flag(int nb);
int s_flag_printable(char const *str);
int tab_function_point(char c, va_list list);
int call_b(char c, va_list list);
int call_percent(char c, va_list list);
int call_o(char c, va_list list);
int call_p(char c, va_list list);
int call_s_printable(char c, va_list list);
int call_u(char c, va_list list);
int call_x(char c, va_list list);
int call_x_upcase(char c, va_list list);
int call_s(char c, va_list list);
int call_d(char c, va_list list);
int call_i(char c, va_list list);
int call_c(char c, va_list list);

#endif
