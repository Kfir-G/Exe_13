//#include <stdio.h>
//int apearens(int num, int digit)
//{
//	if (num < 10) 
//	{						
//		if (num >= digit)
//			return 1;
//		else
//			return 0;
//	}
//	if (num % 10 >= digit)
//		return apearens(num / 10, digit) + 1;
//	else
//		return apearens(num / 10, digit);
//}
//void main()
//{
//	int num, digit;
//	printf("Enter a number:\n");
//	scanf_s("%d", &num);
//	printf("Enter a digit:\n");
//	scanf_s("%d", &digit);
//	if (num < 0 || digit < 0)
//		printf("Error the number or the digit is negative\n");
//	else
//		printf("The digit %d is bigger or equal %d times in the digits of number %d\n", digit, apearens(num, digit), num);
//}