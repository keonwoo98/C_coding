#include <stdio.h>

// 문제 1-1
// int main(void) {
//     int num;
//     printf("insert: ");
//     scanf("%d", &num);
//     printf("result: %d", ~num+1);
//     return 0;
// }

// 문제 1-2
int main(void) {
    int num = 3;
    printf("%d", (num << 3) >> 2);
    return 0;
}