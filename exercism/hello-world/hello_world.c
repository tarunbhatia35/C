#include "hello_world.h"
#include <stdlib.h>
#include <string.h>
const char *hello(void
const char *hello(void)
{
    char * ans = malloc(sizeof(char) * strlen("Hello, World!"));
    strcpy(ans,"Hello, World!");

    /* string is pointer of the first character */
    return  ans;
}
