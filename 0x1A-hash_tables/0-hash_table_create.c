#include "hash_tables.h"
/**
 * hash_table_create - create a hash table.
 * @size: size of table
 *
 * Return: hash_table or NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *temp = NULL;

	if (size > 0)
	{
		temp = malloc(sizeof(hash_table_t));
		if (temp == NULL)
			return (NULL);
		temp->size = size;
		temp->array = malloc(size * sizeof(hash_node_t));
		if (temp->array == NULL)
		{
			free(temp);
			return (NULL);
		}
		for (; i < size; i++)
			temp->array[i] = NULL;
		return (temp);
	}
	return (NULL);
}
