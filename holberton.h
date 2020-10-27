#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>	
#include <unistd.h>

/** printf function**/
int _printf(char *pszFormatString, ...);

/*print character function*/
int _putchar(char n);

/*function that reverse strings*/
void __reverse(char s[]);

/* function that return lenght of a string*/	
int _strl(char *str);

/* function for int to string */	
void __itoa(int n, char s[]);

#endif
