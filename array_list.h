#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

typedef struct {
	void **data;
	int size;
	int capacity;
	int element_size;
} ArrayList;

ArrayList* arraylist_create(int initial_capacity, int element_size);
void arraylist_destroy(ArrayList *list);

void arraylist_add(ArrayList *list, void *element);
void arraylist_insert(ArrayList *list, void *element, int index);
void* arraylist_get(ArrayList *list, int index);
int arraylist_remove(ArrayList *list, int index);
void arraylist_clear(ArrayList *list);

void arraylist_ensure_capacity(ArrayList *list, int min_capacity);
void arraylist_trim_clone(ArrayList *list); // No la usas, pero la dejo porque estaba declarada
ArrayList* arraylist_clone(ArrayList *list);

#endif
