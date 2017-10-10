#include <stdio.h>
#include "array.h"

int		main(void){

	R_array ra;

	init_array(&ra);

	printf("Max Size: %d\nCurrent Size: %d\n", ra.max_size, ra.cur_size);

	for (int i = 0; i < 15; i++){

		append_array(&ra, 30);
	}

	printf("Max Size: %d\nCurrent Size: %d\n", ra.max_size, ra.cur_size);

	free_array(&ra);

}