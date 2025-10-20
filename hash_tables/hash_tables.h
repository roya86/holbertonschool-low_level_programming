#ifndef HASH_TABLES_H
#define HASH_TABLES_H

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;
/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 *
 * Description: structure that represent a hash table
 */
typedef struct hash_table_c
{
	unsigned long int size;
	hash_node_t **array;

}
hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);

#endif
