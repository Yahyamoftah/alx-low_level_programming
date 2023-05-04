/**
 * flip_bits - Returns the number of bits to flip to get from one number to another.
 * @n: first number.
 * @m: second number.
 *
 * Return: number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned int count = 0;
    unsigned long int diff;

    diff = n ^ m;

    while (diff > 0)
    {
        if (diff & 1)
            count++;
        diff >>= 1;
    }

    return (count);
}

