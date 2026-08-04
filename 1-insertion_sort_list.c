#include "sort.h"

/**
 * insertion_sort_list - Trie une liste doublement chaînée
 *                       avec l’algorithme du tri par insertion.
 * @list: Pointeur vers le pointeur de tête de la liste.
 *
 * Description :
 * Le tri par insertion déplace chaque élément vers la gauche
 * tant qu’il est plus petit que son précédent.
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *current, *tmp;

    if (!list || !*list || !(*list)->next)
        return;

    current = (*list)->next;

    while (current)
    {
        tmp = current;
        current = current->next;

        /* Déplacement de tmp vers la gauche si nécessaire */
        while (tmp->prev && tmp->prev->n > tmp->n)
        {
            /* Retirer tmp de sa position actuelle */
            tmp->prev->next = tmp->next;
            if (tmp->next)
                tmp->next->prev = tmp->prev;

            /* Insérer tmp avant son précédent */
            tmp->next = tmp->prev;
            tmp->prev = tmp->prev->prev;

            if (tmp->prev)
                tmp->prev->next = tmp;
            else
                *list = tmp;

            tmp->next->prev = tmp;

            print_list(*list);
        }
    }
}
