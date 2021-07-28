#include "pipex.h"

int f_strlen(const char *str)
{
    const char *new_str;

    new_str = str;
    while (*new_str)
        ++new_str;
    return (new_str - str);
}

int f_strcmp(const char *str1, const char *str2)
{
    while (*str1 == *str2++)
    {
        if (*str1++ == 0)
        {
            return (0);
        }
    }
    return (*(char *)str1 - *(char *) --str2);
}