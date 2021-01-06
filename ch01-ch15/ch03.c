#include <stdio.h>

// 문제 1-3
// int main(void) {
//     int num;
//     printf("insert: ");
//     scanf("%d", &num);
//     printf("result: %d", num*num);
//     return 0;
// }

// 문제 1-5
int main(void) {
    int num1, num2, num3;
    int result;
    printf("insert: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    result = (num1-num2)*(num2+num3)*(num3/num1);
    printf("result: %d", result);
    return 0;
}