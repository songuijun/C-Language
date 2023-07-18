#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
/*
struct student
{
	char name[20];
	int age;
	double grade[3];
};

int main() {
	struct student person;

	strcpy(person.name, "UiJun SONG");
	person.age = 20;
	person.grade[0] = 90;
	person.grade[1] = 85;
	person.grade[2] = 80;

	printf("학생 이름 : %s\n", person.name);
	printf("나이 　　 : %d\n", person.age);
	printf("국어 　　 : %lf\n", person.grade[0]);
	printf("영어 　　 : %lf\n", person.grade[1]);
	printf("수학 　　 : %lf\n", person.grade[2]);

}*/
struct ori_car{
	char name[40];
	int price;
	double grade[2];
};
int main() {
	struct ori_car person;
	srand(time(NULL));
	person.price = rand() % 2000 + 2000;
	person.grade[0] = rand()%100+100;
	person.grade[1] = rand()%120+100;
	
	
	printf("자동차 이름을 입력해주세요:");
	scanf("%s", &person.name);
	printf("\n");
	printf("이름　　 : %s\n", person.name);
	printf("가격　　 : %d $\n", person.price);
	printf("마력　　 : %lf\n", person.grade[0]);
	printf("최고속력 : %lf km/h", person.grade[1]);

}