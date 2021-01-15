#include <stdio.h>

// 문제 1
// #define SUM(a, b, c) ((a) + (b) + (c))
// #define MUL(a, b, c) ((a) * (b) * (c))
// int main(void)
// {
//     int num1, num2, num3;
//     printf("insert number: ");
//     scanf("%d %d %d", &num1, &num2, &num3);
//     printf("result: %d\n", SUM(num1, num2, num3));
//     printf("result: %d", MUL(num1, num2, num3));
//     return 0;
// }

// 문제 2
// #define PI 3.1415
// #define AREA(n) ((n)*(n)*PI)
// int main(void)
// {
//     int num;
//     printf("반지름: ");
//     scanf("%d", &num);
//     printf("area: %g", AREA(num));
//     return 0;
// }

// 문제 3
#define MAX(a, b) ((a)>(b) ? (a) : (b))
int main(void)
{
    int num1, num2;
    printf("2num: ");
    scanf("%d %d", &num1, &num2);
    printf("%d", MAX(num1, num2));
    return 0;
}