#include "hash_tables.h"

/**
* hash_table_get - Retrieve the value associated with
* a key in a hash table.
* @ht: A pointer to the hash table.
* @key: The key to get the value of.
*
* Return: If the key cannot be matched - NULL.
*         Otherwise - the value associated with
* the key in the hash table.
*
* Description: This function retrieves the value
* associated with a given key
*              in the provided hash table. It takes
* a pointer to the hash
*              table `ht` and the key to look up `key` as parameters.
*
*              The function uses the key_index function to calculate the index
*              at which the key is expected to be stored in
* the hash table array.
*              It then traverses the linked list at that index, checking if the
*              keys match. If a matching key is found, the corresponding value
*              is returned. If the key cannot be found
* or if any input parameter
*              is invalid, NULL is returned.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *node;
unsigned long int index;

if (ht == NULL || key == NULL || *key == '\0')
return (NULL);

index = key_index((const unsigned char *)key, ht->size);
if (index >= ht->size)
return (NULL);

node = ht->array[index];
while (node && strcmp(node->key, key) != 0)
node = node->next;

return ((node == NULL) ? NULL : node->value);
}

