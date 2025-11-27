#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "array_list.h"


//Los array list empiezan con un numero minimo de elementos que seria esta constante
#define DEFAULT_CAPACITY 10
/*Cada que se llame la lista, esta va a crecer, pero no sumandole su capacidad por defecto
si no que va creciendo linealmente segun las necesidades*/
#define  GROWTH_FACTOR 2

ArrayList* arraylist_create(int initial_capacity, int element_size){
/*El desarollador puede escoger una capacidad inicial custom, pero si no la define se va con la capacidad
minima por defecto*/
	if(initial_capacity <= 0){
		initial_capacity = DEFAULT_CAPACITY;
	}
	
ArrayList *list = (ArrayList*)malloc(sizeof(ArrayList));
	if(List){
		printf("No se puede asignar memoria");
		return NULL;
	}
	
	List -> data = (void**)malloc(sizeof(void*) * initial_capacity);
	if(!list->data){
		free(list);
		printf("No se pudo solicitar memoria para almacenar los datos de la lista");
		return NULL;
	}
	
	list-> size = 0;
	list_capacity = initial_capacity;
	list->element_size = element_size;
}
	
void arraylist_destroy(ArrayList *list){
	if(!list) return;
	arraylist_clear(list);
	free(list->data);
	free(list);
}
	
void arraylist_clear(ArrayList *list){
	if(!list) return;
	for(int i=0; i<list->size; i++){
		free(list->data[i]);
		list->data[i] = NULL;
	}
	list->size = 0;
}	
	
	
	
	
	
	
}
