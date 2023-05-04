#include <stdio.h>

/* Function to check endianness */
int get_endianness(void)
{
    unsigned int i = 1;
    char *c = (char*)&i;
    return (*c ? 1 : 0);
}

int main(void)
{
    int n;

    /* Call the get_endianness function to check endianness */
    n = get_endianness();

    /* Print whether the machine is big or little endian */
    if (n != 0)
    {
        printf("Little Endian\n");
    }
    else
    {
        printf("Big Endian\n");
    }

    return (0);
}

