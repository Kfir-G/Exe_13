#include <stdio.h>
#define SIZE 50
void my_strcpy(char  a[], char b[], int sizeA);
void main()
{
	char str1[SIZE + 1];
	char str2[SIZE + 1];
	printf("Enter 2 words up to %d\n", SIZE);
	gets_s(str1, SIZE);
	gets_s(str2, SIZE);
	my_strcpy(str1, str2, strlen(str1));
	printf("Copying %s to %s\n", str1,str2);
}
void my_strcpy(char  a[], char b[], int sizeA)
{
	if (sizeA == 1 || sizeA == 0)
	{
		*a = 0;
		return;
	}
	if (!*b)
	{
		for (int i = 0; i < sizeA;i++)
			a[i] = 0;
		return;
	}
	*a = *b;
	return my_strcpy(++a, ++b, sizeA - 1);
}