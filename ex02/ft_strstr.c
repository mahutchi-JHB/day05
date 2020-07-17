#include <stdio.h>

int ft_strlen(char *str)
{
    int len = 0;
    int i;

    for (i=0; str[i] != 0; i++)
    {
        len++;
    }
    return(len);
}


const char* ft_strstr(const char* A, const char* B)
{
	if (*B == '\0')
		return A;

	for (int i = 0; i < ft_strlen(A); i++)
	{
		if (*(A + i) == *B)
		{
			char* ptr = ft_strstr(A + i + 1, B + 1);
			return (ptr) ? ptr - 1 : NULL;
		}
	}

  return NULL;
}

//int main(){
//  char *A = "how do these strings work?";
//  char *B = "do";

//  printf("%s\n", ft_strstr(A, B));
//  return(0);
//}
