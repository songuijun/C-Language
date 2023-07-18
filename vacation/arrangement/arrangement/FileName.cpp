#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


#define SIZE 4

int main() 
{
	srand((unsigned)time(NULL));
	int num1, num2, num3, num4;
	printf("4가지 숫자를 입력해주세요(숫자를 입력후 엔터를 눌러주세요)\n");
	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

	int arr[SIZE] = {num1,num2,num3,num4};

	/*
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand();
	}
	*/
	
	int max = arr[0];
	int min = arr[0];

	for (int i = 0; i < SIZE; i++) {
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}
	printf("max = %d\n", max);
	printf("min = %d\n", min);
}