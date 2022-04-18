#include <stdio.h>
#include <string.h>

void swap(char *x, char *y);
void perm(char *a, int n, int r);

int main()
{
	char str[26];
	scanf("%s", str);
	int n = strlen(str);
	perm(str, 0, n - 1);
	return 0;
}

void swap(char *x, char *y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void perm(char *a, int n, int r)
{
	int i;
	if (n == r)
	{
		printf("%s\n", a);
	}
	else
	{
		for (i = n; i <= r; i++)
		{
			swap((a + n), (a + i));
			perm(a, n + 1, r);
			swap((a + n), (a + i));
		}
	}
}