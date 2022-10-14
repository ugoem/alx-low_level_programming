#ifndef VARIADIC_FUCNTIONS_H
#define VARIADIC_FUNCTIONS_H

/*
 * File: variadic_functions.h
 * Auth: ugoem
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x0F-variadic_functions directory.
 */
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif /*Variadic_function*/
