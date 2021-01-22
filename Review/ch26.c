#include <stdio.h>

// 문제 1
// #define Add(x, y, z) ((x)+(y)+(z))
// #define Mul(x, y, z) ((x)*(y)*(z))
// int main(void)
// {
//     int n1, n2, n3;
//     printf("3개의 정수 입력: ");
//     scanf("%d %d %d", &n1, &n2, &n3);
//     printf("sum: %d\n", Add(n1, n2, n3));
//     printf("mul: %d\n", Mul(n1, n2, n3));
//     return 0;
// }

// 문제 2
// #define PI 3.1415
// #define AREA(n) ((n)*(n)*PI)
// int main(void)
// {
//     int n;
//     printf("원의 반지름: ");
//     scanf("%d", &n);
//     printf("원의 너비: %lf", AREA(n));
//     return 0;
// }

// 문제 3
#define MAX(x,y) ((x)>(y) ? (x) : (y))
int main(void)
{
    int num1, num2;
    printf("두개의 정수 입력: ");
    scanf("%d %d", &num1, &num2);
    printf("bigger num: %d\n", MAX(num1, num2));
    return 0;
}