#include "libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <string.h>

int main(void)
// ########## ft_isalpha test ##########
/*
{
   printf("Does A return 1?: %d\n",  ft_isalpha ('A'));
   printf("Does a return 1?: %d\n",  ft_isalpha ('a'));
   printf("Does 5 return 0?: %d\n",  ft_isalpha ('5'));
   printf("Does ! return 0?: %d\n",  ft_isalpha ('!'));
   printf("Does NULL return 0?: %d\n",  ft_isalpha ('\0'));
   return (0);
}
*/
// ########## ft_isdigit test ##########
/*
{
   printf("Does A return 0?: %d\n",  ft_isdigit ('A'));
   printf("Does a return 0?: %d\n",  ft_isdigit ('a'));
   printf("Does 0 return 1?: %d\n",  ft_isdigit ('0'));
   printf("Does 5 return 1?: %d\n",  ft_isdigit ('5'));
   printf("Does ! return 0?: %d\n",  ft_isdigit ('!'));
   printf("Does NULL return 0?: %d\n",  ft_isdigit ('\0'));
   return (0);
}
*/
// ########## ft_isalnum test ##########
/*
{
   printf("Does A return 1?: %d\n",  ft_isalnum ('A'));
   printf("Does a return 1?: %d\n",  ft_isalnum ('a'));
   printf("Does 0 return 1?: %d\n",  ft_isalnum ('0'));
   printf("Does 5 return 1?: %d\n",  ft_isalnum ('5'));
   printf("Does ! return 0?: %d\n",  ft_isalnum ('!'));
   printf("Does NULL return 0?: %d\n",  ft_isalnum ('\0'));
   return (0);
}
*/
// ########## ft_isascii test ##########
/*
{
   printf("does a return 1?: %d\n", ft_isascii ('a'));
   printf("does a return 1?: %d\n", ft_isascii ('a'));
   printf("does 0 return 1?: %d\n", ft_isascii ('0'));
   printf("does 5 return 1?: %d\n", ft_isascii ('5'));
   printf("does 037octal return 1?: %o\n", ft_isascii (037));

   return (0);
}
*/
// ########## ft_isprint test ##########
/*
{
   printf("Does A return 1?: %d\n", ft_isprint ('A'));
   printf("Does a return 1?: %d\n", ft_isprint ('a'));
   printf("Does 0 return 1?: %d\n", ft_isprint ('0'));
   printf("Does 5 return 1?: %d\n", ft_isprint ('5'));
   printf("Does 037octal return 0?: %o\n", ft_isprint (037));

   return (0);
}
*/
// ########## ft_strlen test ##########
/*
{
	char	test[] = "I'm a pretty string.";
	char 	test2[] = "Pearlpearlpearlpearl. I'm a fancy string.";
	char	test3[] = "";

	printf("%s\n", test);
	printf("Original function: %lu\n", strlen(test));
	printf("Created function: %zu\n", ft_strlen(test));

	printf("\n%s\n", test2);
	printf("Original function: %lu\n", strlen(test2));
	printf("Created function: %zu\n", ft_strlen(test2));

	printf("%s\n", test3);
	printf("Original function: %lu\n", strlen(test3));
	printf("Created function: %zu\n", ft_strlen(test3));
}
*/
// ########## ft_toupper test ##########
/*
{
   printf("Does a return A?: %c\n", ft_toupper ('a'));
   printf("Does 0 return 0?: %c\n", ft_toupper ('0'));
   printf("Does A return A?: %c\n", ft_toupper ('A'));
   printf("Does $ return $?: %c\n", ft_toupper ('$'));
   printf("Does z return Z?: %c\n", ft_toupper ('z'));
   printf("Does 9 return 9?: %c\n", ft_toupper ('9'));
   printf("Does Z return Z?: %c\n", ft_toupper ('Z'));
}
*/
// ########## ft_tolower test ##########
/*
{
	printf("Does a return a?: %c\n", ft_tolower ('a'));
	printf("Does 0 return 0?: %c\n", ft_tolower ('0'));
	printf("Does A return a?: %c\n", ft_tolower ('A'));
	printf("Does $ return $?: %c\n", ft_tolower ('$'));
	printf("Does z return a?: %c\n", ft_tolower ('z'));
	printf("Does 9 return 9?: %c\n", ft_tolower ('9'));
	printf("Does Z return z?: %c\n", ft_tolower ('Z'));
}
*/
// ########## ft_atoi test ##########
/*
{
		char *n = "945";
        int i1 = atoi(n);
        int i2 = ft_atoi(n);

        if (i1 == i2)
        	printf("Success!");
		if (i1 != i2)
			printf("Error. i1 = %d | i2 = %d", i1, i2);
	return (0);
}
*/
// ########## ft_strlcpy test ##########
/*
{
	char	test1[] = "Testing string.";
	char	test2[] = "Zero";
	char	test3[] = "Another string.";
	char	test4[] = "";

	printf("Original strlcpy:\n");
	printf("Dst: Zero / Src: Testing string. // returns: %lu\n", strlcpy(test2, test1, sizeof(test2)));
	printf("")
	printf("Dst: Another String. / Src: empty // returns: %lu\n", strlcpy(test3, test4, sizeof(test3)));
	printf("Dst: Testing string. / Src: Zero // returns: %lu\n", strlcpy(test1, test2, sizeof(test1)));
	printf("Dst: Another string / Src: empty // returns: %lu\n", strlcpy(test3, test4, sizeof(test3)));
	printf("\nft_strlcpy\n");
	printf("Dst: Zero / Src: Testing string. // returns: %lu\n", ft_strlcpy(test2, test1, sizeof(test2)));
	printf("Dst: Another String. / Src: empty // returns: %lu\n", ft_strlcpy(test3, test4, sizeof(test3)));
	printf("Dst: Testing string. / Src: Zero // returns: %lu\n", ft_strlcpy(test1, test2, sizeof(test1)));
	printf("Dst: Another string / Src: empty // returns: %lu\n", ft_strlcpy(test3, test4, sizeof(test3)));
}
*/
// ########## ft_strlcat test ##########
/*
{
	char	test1[] = "Testing string.";
	char	test2[] = "";
	char	test3[] = "Hello, you gorgeous mf.";
	char	test4[] = "How you doin'?";
	char	test5[] = "The cake is a \tlie.";

	printf("Original strlcat:\n");
	printf("1) Dst: Testing string. Src: "" returns: %lu\n", strlcat(test2, test1, sizeof(test2)));
	printf("2) Dst: Hello, you gorgeous mf. Src: How you doin'? returns: %lu\n", strlcat(test3, test4, sizeof(test3)));
	printf("3) Dst: Testing string. Src: "" returns: %lu\n", strlcat(test1, test2, sizeof(test1)));
	printf("4) Dst: Hello, you gorgeous mf. Src: How you doin'? returns: %lu\n", strlcat(test3, test4, sizeof(test3)));
	printf("5) Dst: Hello, you gorgeous mf. Src: The cake is a \tlie. returns: %lu\n", strlcat(test3, test5, sizeof(test3)));
	printf("\nft_strlcat\n");
	printf("1) Dst: Testing string. Src: "" returns: %lu\n", ft_strlcat(test2, test1, sizeof(test2)));
	printf("2) Dst: Hello, you gorgeous mf. Src: How you doin'? returns: %lu\n", ft_strlcat(test3, test4, sizeof(test3)));
	printf("3) Dst: Testing string. Src: "" returns: %lu\n", ft_strlcat(test1, test2, sizeof(test1)));
	printf("4) Dst: Hello, you gorgeous mf. Src: How you doin'? returns: %lu\n", ft_strlcat(test3, test4, sizeof(test3)));
	printf("5) Dst: Hello, you gorgeous mf. Src: The cake is a \tlie. returns: %lu\n", ft_strlcat(test3, test5, sizeof(test3)));
}*/
// ########## ft_strchr test ##########
/*
{
	char	test1[] = "Testing string.";
	char	test2[] = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
	char	test3[] = "Hello, you gorgeous mf.";

	printf("Original strchr:\n");
	printf("Dst: Testing string. Src: "" returns: %s\n", strchr(test2, sizeof(test2)));
	printf("Dst: Hello, you gorgeous mf. Src: How you doin'? returns: %s\n", strchr(test3, sizeof(test3)));
	printf("Dst: Testing string. Src: "" returns: %s\n", strchr(test1, sizeof(test1)));
	printf("Dst: Hello, you gorgeous mf. Src: How you doin'? returns: %s\n", strchr(test3, sizeof(test3)));
	printf("\nft_strchr\n");
	printf("Dst: Testing string. Src: "" returns: %s\n", ft_strchr(test2, sizeof(test2)));
	printf("Dst: Hello, you gorgeous mf. Src: How you doin'? returns: %s\n", ft_strchr(test3, sizeof(test3)));
	printf("Dst: Testing string. Src: "" returns: %s\n", ft_strchr(test1, sizeof(test1)));
	printf("Dst: Hello, you gorgeous mf. Src: How you doin'? returns: %s\n", ft_strchr(test3, sizeof(test3)));
}
*/
// ########## ft_strdup test ##########
/*
{
	printf("\e[1;31m-- Exercício 00: \e[0m");
	char str0[] = "minha string de teste";
	char str1[] = "OutraSuperDste";
	char str2[] = "ainda mais um teste";
	char str3[] = "";

	char *test0;
	char *test1;
	char *test2;
	char *test3;

	test0 = ft_strdup(str0);
	test1 = ft_strdup(str1);
	test2 = ft_strdup(str2);
	test3 = ft_strdup(str3);

	if (strcmp(test0, str0) != 0)
		printf("KO, expected \"%s\" got \"%s\"\n", test0, str0);
	else if (strcmp(test1, str1) != 0)
		printf("KO, expected \"%s\" got \"%s\"\n", test1, str1);
	else if (strcmp(test2, str2) != 0)
		printf("KO, expected \"%s\" got \"%s\"\n", test2, str2);
	else if (strcmp(test3, str3) != 0)
		printf("KO, expected \"%s\" got \"%s\"\n", test3, str3);
	else
		printf("OK\n");

	free(test0);
	free(test1);
	free(test2);
	free(test3);
}
*/
// ########## ft_memset test ##########
/*
{
char	b1[100], b2[100];

	printf("\n%s\n\n", (ft_memset(b1, 65, 100)));
	printf("%s\n", (memset(b2, 65, 100)));
}
*/
// ########## ft_memcpy and ft_memmmove test ##########
{
	char dest[] = "Coucou";
	char src[] = {0, 30, 5};
	printf("\nDest: %s ---- Src: %s\n", dest, src);
	printf("After memcpy:\n%s\n", memcpy(dest, src, 3));
	printf("After ft_memcpy:\n%s\n", (ft_memcpy(dest, src, 3)));
	return (0);
}
