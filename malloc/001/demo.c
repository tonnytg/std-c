#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char *m;
	char *name = "Antonio";
	m = malloc((sizeof(char) * strlen(name)) + 1);
	m = name;
	printf("Hello World and %s\n", name);
	printf("Hello World2 and %s\n", m);

	free(name);
	return (0);
}