////Cpp Basics - memset, memcpy, endians (endians are not included for now)
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <iostream>
//#include <string.h>
//
//
//
//int main()
//{
//
//	//MEMSET
//	char charStr[10] = "Merhaba";
//	void* memsetEquivalent1;
//
//	memsetEquivalent1 = memset(charStr, 0, strlen(charStr));
//
//	printf("Char Set's address: %p\n", charStr);
//	printf("Memset function's return address: %p\n", memsetEquivalent1);
//	if (memsetEquivalent1 == charStr)
//	{
//		printf("Are they equal? : yes\n\n\n");
//	}
//
//
//	int arr[10];
//	void* memsetEquivalent2;
//	memsetEquivalent2 = memset(arr, 0, sizeof(arr));
//
//	printf("%p memsetEquivalent2, return type of memset:\n", memsetEquivalent2);
//	printf("%p arr:\n", arr);
//	printf("%p &arr[0]: \n", &arr[0]);
//	if ((memsetEquivalent2 == arr) && (memsetEquivalent2 == &arr[0]))
//	{
//		printf("Are they all equal? : yes\n\n\n");
//	}
//
//
//
//
//	//MEMCPY
//	// Bir dizeyi kopyalamak için memcpy fonksiyonu
//
//	char srcCpy[] = "Merhaba Dunya!";
//	char destCpy[20];
//
//	memcpy(destCpy, srcCpy, strlen(srcCpy) + 1);
//
//	printf("\n\n\nHedef dize: %s\n", destCpy);
//
//	// Bir yapýyý kopyalamak için memcpy fonksiyonu
//
//	struct PersonCpy {
//		char name[50];
//		int age;
//	};
//
//	struct PersonCpy person1 = { "Ahmet", 25 };
//	struct PersonCpy person2;
//
//	memcpy(&person2, &person1, sizeof(struct PersonCpy));
//
//	printf("Hedef yapinin ismi: %s\n", person2.name);
//	printf("Hedef yapinin yasi: %d\n\n\n\n", person2.age);
//
//}
//
