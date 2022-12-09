Write a function that inserts a new node at a given position.



Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

where idx is the index of the list where the new node should be added. Index starts at 0

Returns: the address of the new node, or NULL if it failed

if it is not possible to add the new node at index idx, do not add the new node and return NULL

Your files 2-add_dnodeint.c and 3-add_dnodeint_end.c will be compiled during the correction
