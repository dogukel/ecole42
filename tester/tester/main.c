#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void    *ft_calloc(size_t count, size_t size)
{
    char    *p;
    size_t  i;
    
    i = 0;
    p = (char *)malloc(count * size);
    if (p == NULL)
        return (NULL);
    while (i < (count * size))
    {
        p[i] = '\0';
        i++;
    }
    return (p);
}
