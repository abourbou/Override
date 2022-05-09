
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("enter one and only one argument\n");
		return (0);
	}
	if (strlen(argv[1]) < 6 || strlen(argv[1]) > 31)
	{
		printf("argument must be between 6 and 31 char\n");
		return (0);
	}
	char *str = argv[1];

	int32_t var_10h = ((int32_t)str[3] ^ 0x1337U) + 0x5eeded;
	printf("STARTING\n");
	printf("str[3] : [%c], after operation : [%d]\n\n", str[3], var_10h);
	printf("FOR\n");
	for (size_t i =0; i < strlen(argv[1]); i++)
	{
		var_10h = var_10h + ((int32_t)str[i] ^ var_10h) % 0x539;
		printf("str[%zu] : [%c], var_10h : [%d]\n", i, str[i], var_10h);
	}
	return (0);
}