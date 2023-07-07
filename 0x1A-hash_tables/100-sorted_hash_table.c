#include "hash_tables.h"

/**
* hash_table_delete - Deletes a hash table.
* @ht: A pointer to the hash table to delete.
*
* Description: Frees the memory allocated for a hash table,
*              including all its nodes and arrays.
*/
void hash_table_delete(hash_table_t *ht)
{
hash_table_t *head = ht;
hash_node_t *node, *tmp;
unsigned long int i;

for (i = 0; i < ht->size; i++)
{
if (ht->array[i] != NULL)
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
}
}
free(head->array);
free(head);
}

