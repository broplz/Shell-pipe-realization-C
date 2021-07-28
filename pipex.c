#include "pipex.h"

int main (int ac, char **av)
{
    char *str1 = "string";
    char *str2 = "string";
    char *str3 = "test";

    int i = f_strcmp(str2, str1);
    printf("%d\n", i);
}