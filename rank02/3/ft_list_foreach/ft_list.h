#ifndef	FT_LIST_H
# define FT_LIST_H
/*
 * OPTION 1
typedef struct s_list t_list;

struct s_list
{
	struct s_list	*next;
	void		*data;
}
*/

/*
 * OPTION 2
 */
typedef struct s_list
{
	struct s_list	*next;
	void		*data;
}			t_list;
#endif
