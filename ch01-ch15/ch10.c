#include <stdio.h>

// 문제 1
// int main(void)
// {
//     int num=0;
//     printf("insert: ");
//     scanf("%d", &num);
//     printf("%x", num);
//     return 0;
// }

// 문제 2
// int Gugu(int num1, int num2)
// {
//     int i;
//     if (num1<num2)
//     {
//         for (; num1<=num2; num1++)
//         {
//             for (i = 1; i < 10; i++)
//                 printf("%d*%d=%d\n", num1, i, num1*i);
//             printf("\n");
//         }
//     }
//     else
//     {
//         for (; num2<=num1; num2++)
//         {
//             for (i = 1; i < 10; i++)
//                 printf("%d*%d=%d\n", num2, i, num2*i);
//             printf("\n");
//         }
//     }
//     return 0;
// }
// int main(void)
// {
//     int num1, num2;
//     printf("몇 단부터 몇 단까지?: ");
//     scanf("%d %d", &num1, &num2);
//     Gugu(num1, num2);
//     return 0;
// }

// 문제 3
// int gcd(int a, int b)
// {
//     int gcdNum=0;
//     for(int i=1; i<=a; i++)
//     {
//         if(a%i==0 && b%i==0)
//             gcdNum=i;
//     }
//     return gcdNum;
// }
// int main(void)
// {
//     int num1, num2;
//     printf("2 numbers: ");
//     scanf("%d %d", &num1, &num2);
//     printf("%d", gcd(num1, num2));
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
//         for(j=1; j*b<won; j++)
//             for(k=1; k*c<won; k++)
//             {
//                 if(i*a+j*b+k*c==won)
//                     printf("크림빵 %d, 새우깡 %d, 콜라 %d\n", i, j, k);
//             }
//     printf("어떻게 구입하시겠습니까?\n");
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
//     printf("insert second: ");
//     scanf("%d", &time);
//     printf("h: %d ", time/3600);
//     printf("m: %d ", (time%3600)/60);
//     printf("s: %d ", ((time%3600)%60));
//     return 0;   
// }

// 문제 7
// int main(void)
// {
//     int n, i, j=2;
//     printf("number: ");
//     scanf("%d", &n);
//     if(n==1)
//         printf("wrong number");
//     for(i=0; j<=n; i++)
//     {
//         j=j*2;
//     }
//     printf("k: %d", i);
//     return 0;
// }

// 문제 8
int cal(int num)
{
    if(num==0)
        return 1;
    return cal(num-1)*2;
}
int main(void)
{
    int num;
    printf("insert: ");
    scanf("%d", &num);
    printf("2의 %d승은 %d\n", num, cal(num));
    return 0;
}