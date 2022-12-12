#include <stdio.h>
#include <string.h>



char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main()
{
	char src[] = "Hello";
	char dest[] = "World1";

	printf("%s", ft_strncpy(dest, src, 3));
		printf("\n%s", ft_strncpy(dest, src, 5));
	printf("\n%s", ft_strncpy(dest, src, 7));
}
