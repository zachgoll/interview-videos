#include <stdio.h>
#include <stdlib.h>
#include "list.h"

node	*create_node(int data, node *next){

	node *new = (node*)malloc(sizeof(node));
	if (new == NULL){
		return(0);
	}

	new->next = next;
	new->data = data;

	return new;
}

node 	*insert_front(int data, node *head){
	node *new = create_node(data, head);
	head = new;
	return head;
}

void	traverse(node *head){

	while (head->next != NULL){
		printf("%d->", head->data);
		head = head->next;
	}

	printf("%d\n", head->data);

}


node 	*insert_end(int data, node *head){

	node *cursor;
	cursor = head;

	if (head){
		node *new = create_node(data, NULL);

		while (cursor->next != NULL){
			cursor = cursor->next;
		}

		cursor->next = new;
	} else {
		head = create_node(data, NULL);
	}

	return head;
}

int 	find_element(int data, node *head){

	int index;

	index = 0;
	while (head->next != NULL){
		if (head->data == data)
			return index;
		else{
			index++;
			head = head->next;
		}
	}
	return (-1);
}










