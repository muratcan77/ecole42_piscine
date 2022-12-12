#include <stdio.h>
#include<unistd.h>
void	ft_putstr_non_printable(char *str);

int main (void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien");
	ft_putstr_non_printable("Coucou tu vas bie\t\v\0n");
	ft_putstr_non_printable("");
}
