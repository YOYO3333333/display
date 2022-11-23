
#include <stddef.h>
#include <stdio.h>
void display_square(int width)
{
    if (width <= 0)
        return;
    if (width % 2 == 0)
        width++;
    if (width == 1)
    {
        putchar(42);
        putchar(10);
        return;
    }
    for (int i = 0; i < width; i++)
    {
        putchar(42);
    }
    putchar(10);
    for (int i = 1; i < width / 2; i++)
    {
tr       putchar(42);
        for (int j = 0; j < width - 2; j++)
        {
            putchar(32);
        }
        putchar(42);
        putchar(10);
    }
    for (int i = 0; i < width; i++)
    {
        putchar(42);
    }
    putchar(10);
}


int main()
{
    struct stack *s = NULL;
    s = stack_push(s, 5);
    printf("%d\n", s->data);
    stack_pop(s);
    printf("%p\n", (void*)s);
    return 0;
}
