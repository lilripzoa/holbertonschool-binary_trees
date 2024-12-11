# BINARY TREES

[![forthebadge](https://forthebadge.com/images/badges/made-with-markdown.svg)](https://forthebadge.com)

## DESCRIPTION

The project **Binary Trees** will explore various concepts related to binary trees, including understanding what a binary tree is, the difference between a binary tree and a Binary Search Tree, and the possible gain in terms of time complexity compared to linked lists. It will also cover important properties such as the depth, height, and size of a binary tree, the different traversal methods to navigate through a binary tree, and the characteristics of specific types of binary trees, like complete, full, perfect, and balanced binary trees.

![Image](https://upload.wikimedia.org/wikipedia/commons/thumb/d/d0/Arbre_binaire_ordonne.svg/612px-Arbre_binaire_ordonne.svg.png?20080115192441)

## INSTALLATION

### Clone the GIT repository :
Open a terminal and run the following command to clone the project to your local machine:

```
https://github.com/lilripzoa/holbertonschool-binary_trees.git
```
## BUILD WITH :

[VI EDITOR](https://linux.goffinet.org/administration/traitement-du-texte/editeur-de-texte-vi/)
### USING :
[LANGAGE C](https://fr.wikipedia.org/wiki/C_(langage))

## line for compile

```
gcc -Wall -Wextra -Werror -pedantic -std=gnu89
```
![GIF Animation](https://i.giphy.com/media/v1.Y2lkPTc5MGI3NjExcHN3bDRqdnQ3MGpweGo0dWlub3Jod2s5ZzBncmVyNWdjaWZ5ZXlwZSZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/2IudUHdI075HL02Pkk/giphy.gif)


## DATA STRUCTURE

```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```
![GIF Animation](https://i.giphy.com/media/v1.Y2lkPTc5MGI3NjExdnl3YzF2MTR6cnRnMjQ0aWw4Ymw3M2p5Z2s5d3prbGMxcW5pZ3JkZiZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/ITXgZuGi17YwCQIofC/giphy.gif)

## TASKS TO BE COMPLETED (19 stasks):

1. **Task 1**: New node
2. **Task 2**: Insert left
3. **Task 3**: Insert right
4. **Task 4**: Delete
5. **Task 5**: Is leaf
6. **Task 6**: Is root
7. **Task 7**: Pre-order traversal
8. **Task 8**: In-order traversal
9. **Task 9**: Post-order traversal
10. **Task 10**: Height
11. **Task 11**: Depth
12. **Task 12**: Size
13. **Task 13**: Leaves
14. **Task 14**: Nodes
15. **Task 15**: Balance factor
16. **Task 16**: Is full
17. **Task 17**: Is perfect
18. **Task 18**: Sibling
19. **Task 19**: Uncle
