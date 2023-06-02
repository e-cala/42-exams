#include <unistd.h>
#include <stdbool.h>

bool	hidenp(char *s1, char *s2)
{
	while (*s2)
	{
		if (*s1 == *s2)
			s1++;
		if (!*s1)
			return (write(1, "1", 1));	
		s2++;
	}
	return (write(1, "0", 1));
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		hidenp(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
