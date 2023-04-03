/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to destination array
 * @src: pointer to source array
 * @n: number of bytes to copy
 *
 * Return: pointer to destination array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i = 0;

    while (i < n)
    {
        dest[i] = src[i];
        i++;
    }

    return (dest);
}

