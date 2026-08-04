#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/**
 * struct listint_s - Représente un nœud d'une liste doublement chaînée
 * @n: Valeur entière
 * @prev: Pointeur vers le nœud précédent
 * @next: Pointeur vers le nœud suivant
 */
typedef struct listint_s
{
	int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

#endif
