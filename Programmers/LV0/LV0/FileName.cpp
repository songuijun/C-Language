//202315010 송의준
/*
//1번
#include <stdio.h>
#define LEN_INPUT 1000001

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", &s1);
    printf("%s", s1);

    return 0;
}
*/
/*
//2번
#include <stdio.h>

int main(void) {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}
*/
/*
//3번
#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    int a;
    scanf("%s %d", s1, &a);
    for (int i = 0; i < a; i++) {
        printf("%s", s1);
    }

    return 0;
}

*/
/*
//4번
#include <stdio.h>
#define LEN_INPUT 21

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);

    for (int i = 0; s1[i] != '\0'; i++) {
        char c = s1[i];

        if (c >= 'A' && c <= 'Z') {
            printf("%c", c + ('a' - 'A'));
        } else if (c >= 'a' && c <= 'z') {
            printf("%c", c - ('a' - 'A'));
        } else {

        }
    }

    return 0;
}
*/
/*
//5번
#include <stdio.h>

int main(void) {
    printf("!@#$%%^&*(\\'\"<>?:;\n");
    return 0;
}

*/
