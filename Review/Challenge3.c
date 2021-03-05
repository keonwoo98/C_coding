#include <stdio.h>
#include <stdlib.h>

// 문제 1
// void rotation(int arr[][4], int n)
// {
//     int i, j;
//     int rrr[n][n];
//     for(i = 0; i < n; i++)
//     {
//         int k = n - 1;
//         for(j = 0; j < n; j++)
//             rrr[i][j] = arr[k--][i];
//     }
    
//     for(i = 0; i < n; i++)
//     {
//         for(j = 0; j < n; j++)
//             printf("%2d ", rrr[i][j]);
//         putchar('\n');
//     }
//     putchar('\n');

//     for(i = 0; i < n; i++)
//     {
//         for(j = 0; j < n; j++)
//             arr[i][j] = rrr[i][j];
//     }
// }

// int main(void)
// {
//     int i, j;
//     int n = 4;
//     int arr[4][4] = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12},
//         {13, 14, 15, 16}
//     };

//     for(i = 0; i < n; i++)
//     {
//         for(j = 0; j < n; j++)
//             printf("%2d ", arr[i][j]);
//         putchar('\n');
//     }
//     putchar('\n');

//     rotation(arr, n);
//     rotation(arr, n);
//     rotation(arr, n);

//     return 0;
// }

// 문제 2
// void Snail(int num)
// {
//     int i;
//     int k = 0;
//     int one = 0;
//     int arr[num][num];

//     while(k < num - 2)
//     {
//         for(i = k; i < num - k; i++)
//             arr[k][i] = ++one;
//         for(i = k + 1; i < num - k; i++)
//             arr[i][(num - k) - 1] = ++one;
//         for(i = (num - k) - 2; i >= k; i--)
//             arr[(num - k) - 1][i] = ++one;
//         for(i = (num - k) - 2; i > k; i--)
//             arr[i][k] = ++one;
//         k++;
//     }
//     for(i = 0; i < num; i++)
//     {
//         for(int j = 0; j < num; j++)
//             printf("%3d ", arr[i][j]);
//         putchar('\n');
//     }
//     putchar('\n');
// }

// int main(void)
// {
//     int n;
//     printf("number : ");
//     scanf("%d", &n);
//     Snail(n);
//     return 0;
// }

// 문제 3
// int main(void)
// {
//     int i;
//     printf("난수의 범위 : 1부터 99까지\n");
//     for(i = 0; i < 5; i++)
//         printf("난수 출력 : %d\n", rand() % 100);
//     return 0;
// }

// 문제 4
// #include <time.h>

// int main(void)
// {
//     int i;
//     srand((int)time(NULL));
//     for(i = 0; i < 2; i++)
//         printf("주사위 %d의 결과 : %d\n", i + 1, rand() % 5 + 1);
//     return 0;
// }

// 문제 5
// #include <time.h>

// int main(void)
// {
//     int me, com;
//     int win = 0;
//     int draw = 0;
//     srand((int)time(NULL));

//     while(1)
//     {
//         do
//         {
//             printf("바위는 1, 가위는 2, 보는 3 : ");
//             scanf("%d", &me);
//         } while (me > 3 || me < 1);
        
//         com = rand() % 3 + 1;

//         if(me == 1)
//         {
//             if(com == 1)
//             {
//                 puts("당신은 바위 선택, 컴퓨터도 바위 선택, 비겼습니다.");
//                 draw++;
//             }
//             else if(com == 2)
//             {
//                 puts("당신은 바위 선택, 컴퓨터는 가위 선택, 이겼습니다.");
//                 win++;
//             }
//             else
//             {
//                 puts("당신은 바위 선택, 컴퓨터는 보 선택, 졌습니다.");
//                 printf("게임의 결과 : %d승, %d무\n", win, draw);
//                 break;
//             }
//         }
//         else if(me == 2)
//         {
//             if(com == 1)
//             {
//                 puts("당신은 가위 선택, 컴퓨터는 바위 선택, 졌습니다.");
//                 printf("게임의 결과 : %d승, %d무\n", win, draw);
//                 break;
//             }
//             else if(com == 2)
//             {
//                 puts("당신은 가위 선택, 컴퓨터도 가위 선택, 비겼습니다.");
//                 draw++;
//             }
//             else
//             {
//                 puts("당신은 가위 선택, 컴퓨터는 보 선택, 이겼습니다.");
//                 win++;
//             }
//         }
//         else
//         {
//             if(com == 1)
//             {
//                 puts("당신은 보 선택, 컴퓨터는 바위 선택, 이겼습니다.");
//                 win++;
//             }
//             else if(com == 2)
//             {
//                 puts("당신은 보 선택, 컴퓨터는 가위 선택, 졌습니다.");
//                 printf("게임의 결과 : %d승, %d무\n", win, draw);
//                 break;
//             }
//             else
//             {
//                 puts("당신은 보 선택, 컴퓨터도 보 선택, 비겼습니다.");
//                 draw++;
//             }
//         }
//     }
//     return 0;
// }

// 문제 6
#include <time.h>

int main(void)
{
    int i, j;
    int me[3];
    int com[3];
    int cnt = 1;
    int strike;
    srand((int)time(NULL));

    for(i = 0; i < 3; i++)
    {
        com[i] = rand() % 10;
        if(i == 1 && com[0] == com[1])
            i--;
        else if(i == 2 && ((com[0] == com[2]) || (com[1] == com[2])))
            i--;
    }

    puts("Game Start!");
    while(1)
    {
        int strike = 0;
        int ball = 0;
        printf("3개의 숫자 선택 : ");
        scanf("%d %d %d", &me[0], &me[1], &me[2]);

        for(i = 0; i < 3; i++)
        {
            for(j = 0; j < 3; j++)
            {
                if(me[j] == com[i] && i == j)
                    strike++;
                else if(me[j] == com[i] && i !=j)
                    ball++;
            }
        }
        printf("%d번째 도전 결과 : %dstrike, %dball!\n", cnt, strike, ball);
        cnt++;
        if(strike == 3)
            break;
    }
    puts("Game Over!");
    return 0;
}