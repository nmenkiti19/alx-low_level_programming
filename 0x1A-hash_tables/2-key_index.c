#include "hash_tables.h"
/**
 * key_index - returns index of a key
 * @key: key
 * @size: size of the hash table array
 *
 * Return: index where key-value pair is stored
 * in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	i = hash_djb2(key);
	i = i % size;

	return (i);
}
