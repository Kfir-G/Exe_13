//#include <stdio.h>
//#define SIZE 4
//int countPositive(int arr[], int sizeArr, int x)
//{
//	if (x > sizeArr || x < 1)
//		return -1;
//	if (x == 1)
//	{
//		if (arr[x - 1] > 0)
//			return 1;
//		else
//			return 0;
//	}
//	if (arr[x-1] > 0)
//		return countPositive(arr, sizeArr, x-1) + 1;
//	else
//		return countPositive(arr, sizeArr, x-1);
//}
//void main()
//{
//	int arr[SIZE] = {1,2,3,-9};
//	printf("%d", countPositive(arr, SIZE, 2));
//}