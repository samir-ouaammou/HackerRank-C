#include <stdio.h>

int	main(void)
{
	char	s[100];

	fgets(s, sizeof(s), stdin);
	printf("Hello, World!\n");
	printf("%s", s);
	return (0);
}
