#include <stdio.h>
#include <unistd.h>

int main ()
{
    int x=8, y=4;
    while (x<10)
    {
           if(x%4==0)
        {
            printf("%d\n", x-y);
            x = x+4;
            y = y-5;
        }
        else if()
        {
            printf("%d\t", x+y);
            y = y+1;
            x = x+1;
        }
    }
}