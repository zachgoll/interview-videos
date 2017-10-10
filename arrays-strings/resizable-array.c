#include <stdio.h>
#include <stdlib.h>

int		main(void){

	int array[] = {1, 2, 3, 4, 5, 6, 7, 8};

	int size_of_array = sizeof(array) / sizeof(array[0]);

	printf("%d\n", size_of_array);

	for (int i = 0; i < size_of_array; i++){

		printf("%d, ", array[i]);
	}

	printf("\n");

}