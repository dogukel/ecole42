#include <stdio.h>
#include <unistd.h>

int main ()
{
    int x=8, y=4;
    while (x<10)
    {
        if(x%4==0)
        {
            continue;
        }
            printf("%d\t", x+y);
    }
}