/*
#include <stdio.h>

int main(void) {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d", a, b, a + b);
    return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>

#define LEN_INPUT1 11
#define LEN_INPUT2 11
#define MAX_LENGTH 21

int main(void) {
    char s1[LEN_INPUT1];
    char s2[LEN_INPUT2];
    scanf("%s %s", s1, s2);

    char result[MAX_LENGTH];
    strcpy(result, s1);
    strcat(result, s2);

    printf("%s\n", result);

    return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>

#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);

    int length = strlen(s1);

    for (int i = 0; i < length; i++) {
        printf("%c\n", s1[i]);
    }

    return 0;
}
*/
/*
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("%d is even\n", n);
    } else {
        printf("%d is odd\n", n);
    }

    return 0;
}
*/
/*
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* my_string, const char* overwrite_string, int s) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int len1 = strlen(my_string);
    int len2 = strlen(overwrite_string);
    char* answer = (char*)malloc(sizeof(char)*len1);

    answer=my_string;

    for(int i=0; i<len2; i++){
        answer[i+s] = overwrite_string[i];
    }

    return answer;
}
*/