#include "sort.h"

/**
 * lomuto_partition - Partition selon le schéma de Lomuto
 * @array: Tableau à trier
 * @low: Indice de début
 * @high: Indice de fin (pivot)
 * @size: Taille du tableau
 *
 * Return: Indice final du pivot
 */
static int lomuto_partition(int *array, int low, int high, size_t size)
{
    int pivot = array[high];
    int i = low;
    int j, tmp;

    for (j = low; j < high; j++)
    {
        /* Si l'élément est plus petit que le pivot */
        if (array[j] < pivot)
        {
            /* Swap uniquement si les valeurs sont différentes */
            if (i != j && array[i] != array[j])
            {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
                print_array(array, size);
            }
            i++;
        }
    }

    /* Swap final du pivot : uniquement si les valeurs sont différentes */
    if (array[i] != array[high])
    {
        tmp = array[i];
        array[i] = array[high];
        array[high] = tmp;
        print_array(array, size);
    }

    return (i);
}

/**
 * quick_sort_rec - Fonction récursive du Quick sort
 * @array: Tableau à trier
 * @low: Indice de début
 * @high: Indice de fin
 * @size: Taille du tableau
 */
static void quick_sort_rec(int *array, int low, int high, size_t size)
{
    int pivot;

    if (low < high)
    {
        pivot = lomuto_partition(array, low, high, size);
        quick_sort_rec(array, low, pivot - 1, size);
        quick_sort_rec(array, pivot + 1, high, size);
    }
}

/**
 * quick_sort - Tri rapide (Lomuto)
 * @array: Tableau à trier
 * @size: Taille du tableau
 */
void quick_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
        return;

    quick_sort_rec(array, 0, (int)(size - 1), size);
}
