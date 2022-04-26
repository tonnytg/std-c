#include <stdio.h>

int ft_strcmp(char *s1, char *s2) {
    int i = 0;

    do {
        if (s1[i] != s2[i]) {
            return (s1[i] - s2[i]);
        }
        i++;
    } while (s1[i] != '\0' || s2[i] != '\0');

    if ((s1[i] == '\0' && s2[i] != '\0') || (s2[i] == '\0' && s1[i] != '\0')) {
        return (s1[i] - s2[i]);
    } else {
        return (0);
    }
}

int main(void)
{
    char name[] = "Antonio";
    char last[] = "Antonio";

    printf("difference: %d\n", ft_strcmp(name, last));
}
