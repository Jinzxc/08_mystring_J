#include "mystring.h"

// calculates the length of a string
int mystrlen(char *s)
{
    int len;
    for(len = 0; s[len]; len++);
    return len;
}

// copies a string from source to dest
char *mystrcpy(char *dest, char *source)
{
    int i = 0;
    while(source[i]) {
        dest[i] = source[i];
        i++;
    }

    return dest;
}

// copies n chars from source to dest
char *mystrncpy(char *dest, char *source, int n)
{
    int i;
    for(i = 0; i < n && source[i]; i++) {
        dest[i] = source[i];
    }

    return dest;
}

// concatenates a string from source to dest
char *mystrcat(char *dest, char *source)
{
    int len = mystrlen(dest);
    int i;

    for(i = 0; source[i]; i++) {
        dest[len + i] = source[i];
    }

    return dest;
}

// concatenates n chars from source to dest
char *mystrncat(char *dest, char *source, int n)
{
    int len = mystrlen(dest);
    int i;

    for(i = 0; i < n && source[i]; i++) {
        dest[len + i] = source[i];
    }

    return dest;
}

// find a char in s
char *mystrchr(char *s, char c) 
{
    while(*s && *s != c) {
        s++;
    }

    if(*s || !c) {
        return s;
    }

    return 0;
}

// compare two strings
int mystrcmp(char *s1, char *s2) {
    int i = 0;

    while(s1[i] && s2[i]) {
        if(s1[i] > s2[i]) {
            return 1;
        }
        
        if (s1[i] < s2[i]) {
            return -1;
        }
        
        i++;
    }

    if(!s1[i] && !s2[i]) return 0;
    if(!s1[i]) return -1;
    
    return 1;
}