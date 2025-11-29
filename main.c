#include <stdio.h>
#include "array_list.h"

int main() {
	
	ArrayList *myArrayList = arraylist_create(3, sizeof(int));
	if (!myArrayList) {
		printf("Error creando la lista.\n");
		return 1;
	}
	
	int a = 10, b = 20, c = 30, d = 40, e = 99;
	
	arraylist_add(myArrayList, &a);
	arraylist_add(myArrayList, &b);
	arraylist_add(myArrayList, &c);
	arraylist_add(myArrayList, &d);
	
	arraylist_insert(myArrayList, &e, 2);
	
	int *val = (int*)arraylist_get(myArrayList, 2);
	if (val) printf("Elemento en indice 2: %d\n", *val);
	
	arraylist_remove(myArrayList, 4);
	arraylist_remove(myArrayList, 1);
	
	printf("\nElementos restantes:\n");
	for (int i = 0; i < myArrayList->size; i++) {
		int *v = (int*)arraylist_get(myArrayList, i);
		printf("index %d = %d\n", i, *v);
	}
	
	arraylist_destroy(myArrayList);
	
	return 0;
}
