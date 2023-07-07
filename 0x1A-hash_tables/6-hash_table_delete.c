#include "hash_tables.h"

/**
* hash_table_delete - Deletes a hash table.
* @ht: A pointer to the hash table to delete.
*
* Description: This function frees the memory allocated for a hash table,
*              including all its nodes and arrays. It takes a pointer to the
*              hash table `ht` as a parameter and performs the necessary memory
*              deallocations.
*/
void hash_table_delete(hash_table_t *ht)
{
if (ht == NULL)
return;

hash_node_t *node, *tmp;
unsigned long int i = 0;

while (i < ht->size)
{
node = ht->array[i];
while (node != NULL)
{
tmp = node->next;
free(node->key);
free(node->value);
free(node);
node = tmp;
}
i++;
}

free(ht->array);
free(ht);
}

