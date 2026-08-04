#include "sort.h"

/**
 * bubble_sort - Trie un tableau d'entiers par ordre croissant
 * en utilisant l'algorithme Bubble Sort
 * @array: Tableau d'entiers à trier
 * @size: Nombre d'éléments du tableau
 *
 * Return: Aucun
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swapped;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;

		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				print_array(array, size);
				swapped = 1;
			}
		}

		if (!swapped)
			break;
	}
}
