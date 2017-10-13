#include <stdio.h>
#include <stdlib.h>
#include "array.h"

void	init_array(R_array *ra){
	ra->cur_size = 0;
	ra->max_size = SIZE;
	ra->array = (int*)malloc(sizeof(int)*SIZE);
}

void	check_size(R_array *ra){

	if(ra->cur_size >= ra->max_size){
		ra->max_size *=2;
		ra->array = realloc(ra->array, sizeof(int)*ra->max_size);
	}
}

void	append_array(R_array *ra, int value){

	check_size(ra);

	ra->array[ra->cur_size] = value;
	ra->cur_size++;
}

void	free_array(R_array *ra){
	free(ra->array);
}

