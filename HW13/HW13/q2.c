//#define _CRT_SECURE_NO_WARNINGS
//#define SIZE 7
//#include <stdio.h>
//#include <string.h>
//int lexographic(char* str1, char* str2)
//{
//	if (*str1 == *str2)
//		return lexographic(str1 + 1, str2 + 1);
//	if (*str1 == '\0' && *str2 == '\0')
//		return 0;
//	if ((*str1 > *str2) || (*str2 == '\0' && *str1 != '\0'))
//		return -1;
//	if (*str1 < *str2 || (*str1 == '\0' && *str2 != '\0'))
//		return 1;
//}
//void main()
//{
//	char strA[SIZE];
//	char strB[SIZE];
//	printf("Enter a word with %d letters:\n", SIZE);
//	scanf("%s", strA);
//	printf("Enter a word with %d letters:\n", SIZE);
//	scanf("%s", strB);
//	int check=(lexographic(strA ,strB));
//	if (check == 1)
//		printf("The %s is first\n", strA);
//	else {
//		if (check == -1)
//			printf("The %s is first\n", strB);
//		else
//			printf("They are equal\n");
//	}
//}