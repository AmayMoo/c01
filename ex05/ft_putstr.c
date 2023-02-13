#include <unistd.h>

void	ft_putstr(char *str)
{
	write(1, str, 13);
}

/*
int main(void)
{
	ft_putstr("J'ai reussi ?");
}
