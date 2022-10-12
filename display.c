#include <stdio.h>
void display_square(int width)
{
    int iter = 0;

    for (int i = 0; i < width-1 ; i++)
    {
        putchar('*');
    }
    putchar('*');
    if (!(width % 2))
    {
        iter = ((width + 1) / 2) - 1;
    }
    else
    {
        iter = ((width + 1) / 2) - 2;
    }
    for (int i = 0; i < iter; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (!j)
            {
                putchar('*');
                continue;
            }
            else if (j == width - 1)
            {
                putchar('*');
                continue;
            }
            putchar(' ');
        }
    }
    for (int i = 0; i < width - 1; i++)
    {
        putchar('*');

    }
    putchar('*');

}


int main(void)
{
display_square(11);

}
