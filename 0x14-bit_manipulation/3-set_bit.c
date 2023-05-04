/**
 * set_bit - Sets the value of a bit at a given index to 1.
 *
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to set to 1.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	*n = (*n | (1ul << index));
	return (1);
}

