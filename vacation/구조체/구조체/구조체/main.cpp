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

	printf("�л� �̸� : %s\n", person.name);
	printf("���� ���� : %d\n", person.age);
	printf("���� ���� : %lf\n", person.grade[0]);
	printf("���� ���� : %lf\n", person.grade[1]);
	printf("���� ���� : %lf\n", person.grade[2]);

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
	
	
	printf("�ڵ��� �̸��� �Է����ּ���:");
	scanf("%s", &person.name);
	printf("\n");
	printf("�̸����� : %s\n", person.name);
	printf("���ݡ��� : %d $\n", person.price);
	printf("���¡��� : %lf\n", person.grade[0]);
	printf("�ְ�ӷ� : %lf km/h", person.grade[1]);

}