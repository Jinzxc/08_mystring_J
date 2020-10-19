#ifndef MYSTRING_H
#define MYSTRING_H

int mystrlen(char *s);
char *mystrcpy(char *dest, char *source);
char *mystrncpy(char *dest, char *source, int n);
char *mystrcat(char *dest, char *source);
char *mystrncat(char *dest, char *source, int n);
char *mystrchr(char *s, char c);
int mystrcmp(char *s1, char *s2);

#endif