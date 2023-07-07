#include "hash_tables.h"

/**
* key_index - Get the index at which a key/value pair should be stored
*             in the array of a hash table.
* @key: The key to get the index of.
* @size: The size of the array of the hash table.
*
* Return: The index of the key.
*
* Description: This function calculates the index of a key using the
*              djb2 algorithm, which is a widely used string hashing
*              function. It takes the key as input and performs a series
*              of bitwise and arithmetic operations to compute a hash value.
*              The hash value is then divided by the size of the array to
*              obtain the index within the valid range of the array.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}

