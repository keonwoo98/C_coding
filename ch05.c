#include <stdio.h>

//문제 1-1
// int main(void) {
//     int xpos1, ypos1;
//     int xpos2, ypos2;
//     int area;
//     printf("1st point: ");
//     scanf("%d %d", &xpos1, &ypos1);
//     printf("2nd point: ");
//     scanf("%d %d", &xpos2, &ypos2);
//     area = (xpos2 - xpos1) * (ypos2 - ypos1);    
//     printf("area: %d\n", area);
//     return 0;
// }

//문제 1-4
// int main(void) {
//     int asc;
//     printf("insert: ");
//     scanf("%d", &asc);
//     printf("%c", asc);
//     return 0;
// }

int main(void) {
    int num1=3, num2=4;
    double result;
    result = (double)num1 / num2;
    printf("%f", result);
    return 0;
}