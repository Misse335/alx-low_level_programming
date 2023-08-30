0x17. C - Doubly linked lists

0. Print list - Write a function that prints all the elements of a dlistint_t list.

1. List length - Write a function that returns the number of elements in a linked dlistint_t list.

2. Add node - Write a function that adds a new node at the beginning of a dlistint_t list.

Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n)

3. Add node at the end - Write a function that adds a new node at the end of a dlistint_t list.

Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

4. Free list - Write a function that frees a dlistint_t list.

5. Get node at index - Write a function that returns the nth node of a dlistint_t linked list.

Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
where index is the index of the node, starting from 0

6. Sum list - Write a function that returns the sum of all the data (n) of a dlistint_t linked list.

Prototype: int sum_dlistint(dlistint_t *head);

7. Insert at index - Write a function that inserts a new node at a given position.

Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
where idx is the index of the list where the new node should be added. Index starts at 0

8. Delete at index - Write a function that deletes the node at index index of a dlistint_t linked list.

Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

Advanced Tasks

9. Crackme4 - Find the password for crackme4.

Save the password in the file 100-password

10. Palindromes - A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers
