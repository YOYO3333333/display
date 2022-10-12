#include <stdio.h>
void display_square(int width)
{
    int iter = 0;



    for (int i = 0; i < width; i++)
    {
        putchar('*');
    }
    putchar('\n');
    if (!(width % 2))
    {
        iter = ((width + 1) / 2) - 1;
    }
    else
    {
        iter = ((width + 1) / 2) - 2;
    }
	for (int i=0 ;i <iter ;i++)
	{
       for (int j=0; j < width;j++)
		{
			if (!j)
            {
                putchar('*');
				int k=0;
				while(k < width-2)
				{  
				 putchar(' ');
				 k++;
				}
                putchar('*');
				putchar('\n');
                continue;
            }
		}
	}

    for (int i = 0; i < width; i++)
    {
        putchar('*');
    }
	putchar('\n');

}

int main(void)
{
display_square(4);
}
