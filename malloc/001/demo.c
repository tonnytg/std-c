#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char *m;
	void *mm;
	char *name = "Antonio";
	m = malloc((sizeof(char) * strlen(name)) + 1);
	mm = (char *)malloc((sizeof(char) * strlen(name)) + 1);	
	m = name;
	mm = name;	
	printf("Hello World and %s\n", name);
	printf("Hello World2 and %s\n", m);
	printf("Hello World3 and %s\n", mm);	

	free(name);
	return (0);
}
