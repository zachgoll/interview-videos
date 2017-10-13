#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int		main(void){

	node *head = NULL;
	int temp;

	head = create_node(25, NULL);

	head = insert_front(30, head);
	head = insert_front(35, head);
	head = insert_front(40, head);
	head = insert_front(45, head);
	head = insert_end(555, head);

	traverse(head);

	temp = find_element(453, head);

	if (temp != -1)
		printf("This element is at index #%d\n", temp);
	else
		printf("This element is not in the linked list\n");

	return (0);
}