#include "libft.a"
#include <printf.h>

int main(void)
{
    char	string[] = "This is a string";
	int	length;
	char c;

	length = 20;
	c = 'L';

	printf("String: %s, character: %c; length %d\n", string, c, length);
	printf("Real code: %s\n", memset(string, c, sizeof(char) * length));
	printf("My code: %s\n", ft_memset(string, c, sizeof(char) * length));
	return 0;
}
