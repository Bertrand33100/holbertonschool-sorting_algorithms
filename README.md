# Sorting Algorithms

## 📖 Description

Ce projet a pour objectif de découvrir les principaux algorithmes de tri, de comprendre leur fonctionnement et d'analyser leurs performances grâce à la notation **Big O**.

Les algorithmes sont implémentés en langage **C** dans le respect des normes **Betty**.

---

# 📚 Objectifs pédagogiques

À la fin de ce projet, vous devrez être capable de :

- Comprendre le principe d'un algorithme de tri.
- Choisir un algorithme adapté selon le contexte.
- Comprendre la différence entre stabilité et instabilité d'un tri.
- Calculer la complexité temporelle avec la notation Big O.
- Manipuler des tableaux et des listes doublement chaînées.
- Implémenter plusieurs algorithmes de tri en C.

---

# 🛠️ Compilation

Compiler avec les options suivantes :

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o sort
```

Exemple :

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-bubble_sort.c 0-main.c print_array.c -o bubble
```

---

# 📂 Structure du projet

```
.
├── sort.h
├── print_array.c
├── print_list.c
├── 0-bubble_sort.c
├── 0-O
├── 1-insertion_sort_list.c
├── 1-O
├── 2-selection_sort.c
├── 2-O
├── 3-quick_sort.c
├── 3-O
└── README.md
```

---

# 🔄 Les algorithmes étudiés

## Bubble Sort

Le Bubble Sort compare deux éléments voisins.

Si le premier est plus grand que le second, ils sont échangés.

À chaque passage, le plus grand élément "remonte" progressivement à la fin du tableau.

### Avantages

- Très simple à comprendre.
- Facile à implémenter.

### Inconvénients

- Lent sur les grands tableaux.
- Beaucoup de comparaisons inutiles.

Complexité :

| Cas      | Complexité |
| -------- | ---------- |
| Meilleur | O(n)       |
| Moyen    | O(n²)      |
| Pire     | O(n²)      |

---

## Insertion Sort

Chaque nouvel élément est inséré à la bonne position dans la partie déjà triée.

C'est le fonctionnement utilisé lorsqu'on trie des cartes à jouer dans sa main.

### Avantages

- Très efficace sur les petits tableaux.
- Très bon lorsque les données sont presque triées.

### Inconvénients

- Devient lent lorsque le nombre d'éléments augmente.

Complexité :

| Cas      | Complexité |
| -------- | ---------- |
| Meilleur | O(n)       |
| Moyen    | O(n²)      |
| Pire     | O(n²)      |

---

## Selection Sort

On recherche le plus petit élément du tableau puis on l'échange avec la première case.

On recommence ensuite sur le reste du tableau.

### Avantages

- Très simple.
- Peu d'échanges.

### Inconvénients

- Effectue toujours le même nombre de comparaisons.

Complexité :

| Cas      | Complexité |
| -------- | ---------- |
| Meilleur | O(n²)      |
| Moyen    | O(n²)      |
| Pire     | O(n²)      |

---

## Quick Sort

Le Quick Sort choisit un pivot puis sépare les éléments en deux groupes :

- les plus petits que le pivot ;
- les plus grands que le pivot.

Le même principe est ensuite appliqué récursivement.

### Avantages

- Très rapide dans la majorité des cas.
- Très utilisé en pratique.

### Inconvénients

- Peut devenir lent si le pivot est mal choisi.

Complexité :

| Cas      | Complexité |
| -------- | ---------- |
| Meilleur | O(n log n) |
| Moyen    | O(n log n) |
| Pire     | O(n²)      |

---

# 📈 Notation Big O

La notation Big O permet d'évaluer les performances d'un algorithme lorsque la taille des données augmente.

Quelques complexités courantes :

| Big O      | Signification          |
| ---------- | ---------------------- |
| O(1)       | Temps constant         |
| O(log n)   | Logarithmique          |
| O(n)       | Linéaire               |
| O(n log n) | Linéaire logarithmique |
| O(n²)      | Quadratique            |
| O(n³)      | Cubique                |
| O(2ⁿ)      | Exponentielle          |
| O(n!)      | Factorielle            |

---

# 📌 Stabilité des algorithmes

Un tri est **stable** lorsqu'il conserve l'ordre relatif des éléments ayant la même valeur.

Exemple :

Avant :

```
5A 3 5B 2
```

Après un tri stable :

```
2 3 5A 5B
```

Le **Bubble Sort** et l'**Insertion Sort** sont stables.

Le **Selection Sort** et le **Quick Sort** ne le sont généralement pas.

---

# 📚 Fichiers du projet

| Fichier                 | Description              |
| ----------------------- | ------------------------ |
| sort.h                  | Prototypes et structures |
| print_array.c           | Affichage d'un tableau   |
| print_list.c            | Affichage d'une liste    |
| 0-bubble_sort.c         | Bubble Sort              |
| 1-insertion_sort_list.c | Insertion Sort           |
| 2-selection_sort.c      | Selection Sort           |
| 3-quick_sort.c          | Quick Sort               |
| 0-O à 3-O               | Complexités Big O        |

---
