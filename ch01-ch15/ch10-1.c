#include <stdio.h>

// 문제 1
// int main(void)
// {
//     int num;
//     printf("deci to hexa: ");
//     scanf("%d", &num);
//     printf("%x",num);
//     return 0;
// }

// 문제 2
// int gugu(int num1, int num2)
// {
//     int i;
//     if (num1<num2)
//     {
//         for (i=1; num1<=num2; num1++)
//         {
//             for (i=1; i<10; i++)
//                 printf("%d*%d=%d\n", num1, i, num1*i);
//             printf("\n");
//         }
//     }
//     else
//     {
//         for (i=1; num2<=num1; num2++)
//         {
//             for (i=1; i<10; i++)
//                 printf("%d*%d=%d\n", num2, i, num2*i);
//             printf("\n");
//         }
//     }
//     return 0;
// }
// int main(void)
// {
//     int num1, num2;
//     printf("몇 단에서 몇 단까지?: ");
//     scanf("%d %d", &num1, &num2);
//     gugu(num1, num2);
//     return 0;
// }

// 문제 3
// int gcd(int num1, int num2)
// {
//     int i, j;
//     for(i=1; i<=num1; i++)
//     {
//         if(num1%i==0 && num2%i==0)
//             j=i;
//     }
//     printf("%d", j);
//     return 0;
// }
// int main(void)
// {
//     int num1, num2;
//     printf("2 numbers: ");
//     scanf("%d %d", &num1, &num2);
//     gcd(num1, num2);
//     return 0;
// }

// 문제 4
// int main(void)
// {
//     int a=500, b=700, c=400;
//     int i,j,k;
//     int won;
//     printf("won: ");
//     scanf("%d", &won);
//     for(i=1; i*a<won; i++)
//     {
//         for(j=1; j*b<won; j++)
//         {
//             for(k=1; k*c<won; k++)
//             {
//                 if(won==i*a + j*b + k*c)
//                     printf("크림빵 %d개 새우깡 %d개 콜라 %d개\n", i, j, k);
//             }
//         }
//     }
//     return 0;
// }

// 문제 5
// int main(void)
// {
//     int i, j, cnt=0;
//     for(i=2; cnt<10; i++)
//     {
//         for(j=2; j<=i; j++)
//         {
//             if(i%j==0 && i!=j)
//                 break;
//             else if(i==j)
//             {
//                 printf("%d ", i);
//                 cnt++;
//             }
//         }
//     }
//     return 0;
// }

// 문제 6
// int main(void)
// {
//     int h, m, s;
//     int time;
//     printf("second: ");
//     scanf("%d", &time);
//     printf("[h:%d, m:%d, s:%d]", time/3600, (time%3600)/60, (time%60)%60);
//     return 0;
// }

// 문제 7
// int main(void)
// {
//     int n, k, i=2;
//     printf("insert: ");
//     scanf("%d", &n);
//     if(n==0)
//         printf("k: 1");
//     else
//     {
//         for(k=0; i<=n; k++)
//                 {
//                     i=2*i;
//                 }
//             printf("k: %d", k);
//         return 0;
//     }
// }

// 문제 8
int Recursive(int n)
{
    if(n==0)
        return 1;
    return Recursive(n-1)*2;
}
int main(void)
{
    int n;
    printf("insert: ");
    scanf("%d", &n);
    printf("2의 %d승은 %d\n", n, Recursive(n));
    return 0;
}