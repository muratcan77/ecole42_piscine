# all_projects_42

ft_strlen 

appine kodu :
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t l;

	l = 0;
	while (s[l] != 0)
		l++;
	return (l);
  
  
  benim kodum:
  int	ft_strlen(char *str )
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

Anahtar const kelime, bir değişkenin değerinin sabit olduğunu belirtir ve derleyiciye programcının onu değiştirmesini engellemesini söyler.
