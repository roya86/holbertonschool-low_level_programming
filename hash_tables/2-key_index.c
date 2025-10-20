#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: The key
 * @size:
 * The size of the array of the hash table
 *
 * Return: The index where the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
