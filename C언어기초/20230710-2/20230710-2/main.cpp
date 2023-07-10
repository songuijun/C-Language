#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
int main()
{
	int array[3];
	int i;

	array[0] = 100;
	array[1] = 200;
	array[2] = 300;

	for (i = 0; i < 3; i++)
		printf("array[%d]ÀÇ °ª: %d\n", i, array[i]);
	return 0;
}*/

/*
int main()
{
	char arr[5];

	scanf("%s", arr);
	printf("arr : %s\n", arr);

	return 0;
}*/
/*
int main()
{
	char arr[5];

	scanf("%s", arr);
	printf("arr : %s\n", arr);

	return 0;
}*/

/*
int main()
{
	printf("ABCDE\0FGHI");
	printf("0123456\0 7891011");
	printf("¤¡¤¤¤§\0¤©¤±¤²");

	return 0;
} */

/*
int main()
{
 char string1[10]="ABCDEF";
 char string2[]="ABCDEF";
 char string3[]={'A', 'B', 'C', 'D', 'F'};
 char string4[]={'A', 'B', 'C', 'D', 'F', '\0'};

 printf("%s\n", string1);
 printf("%s\n", string2);
 printf("%s\n", string3);
 printf("%s\n", string4);
 return 0;
}*/

/*
int main(){
int array2D[3][3];

int array2D[3][3]={{1,1,1},{1,2,4},{1,3,9}};

int array2D[3][3];
int i, j;

for(i=0; i<3; i++) {
 for(j=0; j<3; j++) {
  scanf("%d", array2D[i][j]);
 }
 }
}*/
/*
int main(){

int array3D[2][3][4];

int array3D[2][3][4]={{{1,2,3,4},{4,5,6,7},{8,9,1,2}},{{4,5,6,7},{5,6,7,8},{9,1,2,3}}};

int array3D[2][3][4];
int i, j, k;
for(i=0; i<2; i++) {
 for(j=0; j<3; j++) {
  for(k=0; k<4; k++) {
  scanf("%d", array3D[i][j][k]);
  }
 }
}
}*/

/*
#include <stdio.h>

void func(int arr[], int len);

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };

	func(arr, sizeof arr / sizeof(int));

	return 0;
}

void func(int arr[], int len)
{
	int i;

	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);
	printf("\n");
}*/

/*
void func(int arr[][4], int rows);

int main()
{
	int arr[2][4] = { {1, 2, 3, 4}, {5, 6, 7, 8} };

	func (arr, 2);

	return 0;
}

void func(int arr[][4], int rows)
{
	int i, j;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}
}*/