#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table
 * @size: Size of the Array
 * Return: A hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_dict = NULL;

    if (size > 0)
    {
        new_dict = malloc(sizeof(hash_table_t));

        if (new_dict == NULL)
        {
            return NULL;
        }
        new_dict->array = calloc(size, sizeof(hash_table_t *));
        if (new_dict->array == NULL)
        {
            free(new_dict);
            return NULL;
        }
        new_dict->size = size;
        return (new_dict);
    }
    return (NULL);
}