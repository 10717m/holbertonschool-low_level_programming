#ifndef MAIN_H
#define MAIN_H

#include <stddef.h> /* Include stddef.h for NULL */

/* Function prototype for _memset */
char *_memset(char *s, char b, unsigned int n);

/* Function prototype for _memcpy */
char *_memcpy(char *dest, char *src, unsigned int n);

/* Function prototype for _strchr */
char *_strchr(char *s, char c);

/* Function prototype for _strspn */
unsigned int _strspn(char *s, char *accept);

/* Function prototype for _strpbrk */
char *_strpbrk(char *s, char *accept);

/* Function prototype for _strstr */
char *_strstr(char *haystack, char *needle);

/* Function prototype for print_chessboard */
void print_chessboard(char (*a)[8]);

/* Function prototype for print_diagsums */
void print_diagsums(int *a, int size);

/* Function prototype for set_string */
void set_string(char **s, char *to);

/* Function prototype for _putchar */
int _putchar(char c);

#endif /* MAIN_H */
