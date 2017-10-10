#define SIZE 10

typedef struct {
	int	cur_size;
	int	max_size;
	int	*array;
}		R_array;

void	init_array(R_array *ra);
void	check_size(R_array *ra);
void	append_array(R_array *ra, int value);
void	free_array(R_array *ra);
