typedef struct node{
	int data;
	struct node *next;
}				node;

node	*create_node(int data, node *next);
node 	*insert_front(int data, node *head);
void	traverse(node *head);
node 	*insert_end(int data, node *head);
int 	find_element(int data, node *head);
