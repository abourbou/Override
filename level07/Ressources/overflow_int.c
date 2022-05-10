
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int i = 0;
	int nb = 114 * 4;
	int finish = 0;

	printf("we search for i * 4 = %d\n", nb);
	for (int i = INT_MIN; i != INT_MAX; i++)
	{
		if (i * 4 == nb)
			printf("%d is solution\n", i);
	}
	return (0);
}