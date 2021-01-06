#include <stdio.h>

// 문제 1-1
// int main(void) {
//     int num;
//     int i=0;
//     printf("insert: ");
//     scanf("%d", &num);
//     while (i<num)
//     {
//         printf("Hello world!\n");
//         i++;
//     }
//     return 0;
// }

// 문제 1-2
// int main(void) {
//     int num;
//     int i=0;
//     printf("insert: ");
//     scanf("%d", &num);
//     while (i++<num)
//     {
//         printf("%d ", i*3);
//     }
//     return 0;
// }

// 문제 1-3
// int main(void) {
//     int num;
//     int total=0;
//     while (num!=0)
//     {
//         printf("insert: ");
//         scanf("%d", &num);
//         total += num;
//     }
//     printf("total: %d", total);
//     return 0;
// }

// 문제 1-4
// int main(void) {
//     int dan=0, num=9;
//     printf("insert dan: ");
//     scanf("%d", &dan);
//     while (num>0)
//     {
//         printf("%d * %d = %d\n", dan, num, dan*num);
//         num--;
//     }
//     return 0;
// }

// 문제 1-5
// int main(void) {
//     int num=0;
//     int i;
//     int x;
//     double total=0;
//     printf("insert: ");
//     scanf("%d", &i);
//     while (num<i)
//     {
//         printf("number: ");
//         scanf("%d", &x);
//         total += x;
//         num++;
//     }
//     printf("result: %f", total/i);
//     return 0;
// }

// 문제 2-1
// int main(void) {
//     int num=0;
//     int i=0;
//     int total=0;
//     while (i<5)
//     {
//         while (num<=0)
//         {
//             printf("양수를 입력하시오(%d번째): ", i+1);
//             scanf("%d", &num);
//         }
//         total += num;
//         num=0;
//         i++;
//     }
//     printf("total: %d", total);
//     return 0;
// }

// int main(void) {
//     int num=0, i=0, sum=0;
//     while (i<5)
//     {
//         while (num<=0)
//         {
//             printf("0 or upper(%d번째): ",i+1);
//             scanf("%d", &num);
//         }
//         sum += num;
//         num=0;
//         i++;
//     }
//     printf("sum: %d", sum);
//     return 0;
// }

// int main(void) {
//     int i=0, j=0;
//     while (i<5)
//     {
//         while (j<i)
//         {
//             printf("o ");
//             j++;
//         }
//         j=0;
//         printf("* \n");
//         i++;
//     }
//     return 0;
// }

// 문제 3-1-1
// int main(void) {
//     int total=0, num=1;
//     while (num!=0)
//     {
//         printf("insert num(0 to quit): ");
//         scanf("%d", &num);
//         total += num;
//     }
//     printf("total: %d", total);
//     return 0;
// }

// 문제 3-1-2
// int main(void) {
//     int total=0, num1=0, num2=1;
//     printf("insert num: ");
//     scanf("%d", &num1);
//     while (num2!=0)
//     {
//         printf("insert num(0 to quit): ");
//         scanf("%d", &num2);
//         total += num2;
//     }
//     printf("total: %d", total+num1);
//     return 0;
// }

// 문제 3-2
// int main(void) {
//     int i=0, sum=0;
//     do
//     {
//         sum += i;
//         i=i+2;
//     } while (i<=100);
//     printf("sum: %d", sum);
//     return 0;
// }

// 문제 3-3
// int main(void) {
//     int cur=2;
//     int is=0;
//     do
//     {
//         is=1;
//         do
//         {
//             printf("%d*%d=%d\n", cur, is, cur*is);
//             is++;
//         } while (is<10);
//         cur++;
//     } while (cur<10);
//     return 0;
// }

// 문제 4-1
// int main(void) {
//     int num1,num2;
//     int result;
//     printf("두 개의 정수 입력: ");
//     scanf("%d %d", &num1, &num2);
//     for (result=0; num1<=num2; num1++)
//     {
//         result+=num1;
//     }
//     printf("result: %d", result);
//     return 0;
// }

// 문제 4-2
int main(void) {
    int num1, num2, result=1;
    printf("number: ");
    scanf("%d", &num1);
    for (num2=1; num2<=num1; num2++)
    {
        result*=num2;
    }
    printf("result: %d", result);
    return 0;
}