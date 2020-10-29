B![](https://blog.holbertonschool.com/wp-content/uploads/2019/04/instagram_feed180.jpg)

# Welcome to the Printf Project - C

This project is an application of the C programming knowledge that Holberton School cohort 13 students have learned since starting the program on September 2020. So, this repository contain the files that makes our own printf function, i.e. a printf clone.
Variable arguments are managed by Variadic - macros like va_start, va_arg and va_end from the stdarg library. We iterate character by character in a for loop and copy each character to output string. Same time we check for "%". "%" is not copied to output string. Once we found it, we check the next character: the formatting character.
## Function Prototype:
int _printf(const char *pszFormatString, ...);

## Format specifiers
                    
Specifier  | Description
------------- | -------------
%c  | print a single character
%s  | print a string of characters
%d | print a decimal (base 10) number
%i | print an integer in base 10



### We compiled trought:
gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c
### Authors
David Steven Henao | @daviramiz <\n>
Johan Balbin | @balbinxx
