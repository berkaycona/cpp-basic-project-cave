#include <stdio.h>
#include <iostream>
#include <string.h>




int main()
{
	char charStr[10] = "Merhaba";
	void* memsetEquivalent1;

	memsetEquivalent1 = memset(charStr, 0, strlen(charStr));

	printf("Char Set's address: %p\n", charStr);
	printf("Memset function's return address: %p\n", memsetEquivalent1);
	if (memsetEquivalent1 == charStr)
	{
		printf("Are they equal? : yes\n\n\n");
	}


	int arr[10];
	void* memsetEquivalent2;
	memsetEquivalent2 = memset(arr, 0, sizeof(arr));

	printf("%p memsetEquivalent2, return type of memset:\n", memsetEquivalent2);
	printf("%p arr:\n", arr);
	printf("%p &arr[0]: \n", &arr[0]);
	if ((memsetEquivalent2 == arr) && (memsetEquivalent2 == &arr[0]))
	{
		printf("Are they all equal? : yes\n\n\n");
	}

}

