#include <stdio.h>

// 문제 1-1
// int main(void) {
//     int num=1;
//     while (num<100)
//     {
//         if (num%7==0 || num%9==0)
//             printf("%d ",num);
//         num++;
//     }
//     return 0;
// }

// 문제 1-2
// int main(void) {
//     int num1, num2;
//     printf("insert 2 numbers: ");
//     scanf("%d %d", &num1, &num2);
//     if (num1>num2)
//         printf("result : %d", num1-num2);
//     else
//         printf("result : %d", num2-num1);
//     return 0;
// }

// 문제 1-3
// int main(void) {
//     int kor, eng, math;
//     double avg=0;
//     printf("insert score(kor, eng, math): ");
//     scanf("%d %d %d", &kor, &eng, &math);
//     avg=(kor+eng+math)/3.0;
//     if (avg>=90.0)
//         printf("%f A", avg);
//     else if (avg>=80.0)
//         printf("%f B", avg);
//     else if (avg>=70.0)
//         printf("%f C", avg);
//     else if (avg>=60.0)
//         printf("%f D", avg);
//     else
//         printf("%f F",avg);
//     return 0;
// }

// 문제 1-4
// int main(void) {
//     int num1, num2, sub;
//     printf("insert 2 numbers: ");
//     scanf("%d %d", &num1, &num2);
//     sub = num1>num2 ? num1-num2 : num2-num1;
//     printf("result: %d", sub);
//     return 0;
// }

// 문제 2-1
// int main(void) {
//     int cur, i;
//     for (cur = 1; cur < 10; cur++)
//     {
//         if (cur%2!=0)
//             continue;
//         for (i = 1; i < 10; i++)
//         {
//             printf("%d*%d=%d\n", cur, i, cur*i);
//             if (i>=cur)
//                 break;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 문제 2-2
// int main(void) {
//     int a, z;
//     int result;
//     for (a = 0; a < 10; a++)
//     {
//         for (z = 0; z < 10; z++)
//         {
//             if (a==z)
//                 continue;
//             result=(a*10+z)+(z*10+a);
//             if (result==99)
//                 printf("%d%d+%d%d=%d\n", a, z, z, a, result);
//         }
//     }
//     return 0;
// }

// 문제 3-1
int main(void) {
    int n;
    printf("insert: ");
    scanf("%d", &n);
    switch (n/10)
    {
    case 0:
        printf("0이상 10미만");
        break;
    case 1:
        printf("10이상 20미만");
        break;
    case 2:
        printf("20이상 30미만");
        break;
    default:
        printf("30이상");
    }
    return 0;
}