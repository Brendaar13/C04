/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}
/*int main() {
    char *cadena = "But it seems to me that the demons of this city";
    int longitud = ft_strlen(cadena);

    printf("%d\n", longitud);
    return 0;
}*/
