#include <stdio.h>

// 문제 1
// void rotation(int(*arr)[4], int len)
// {
//     int i, j;
//     int rrr[4][4];
//     int k=3;
//     for(i=0; i<len; i++)
//     {
//         for(j=0; j<4; j++)
//         {
//             rrr[j][k]=arr[i][j];
//         }
//         k--;
//     }
//     for(i=0; i<len; i++)
//     {
//         for(j=0; j<4; j++)
//             printf("%2d ", rrr[i][j]);
//         printf("\n");
//     }
//     printf("\n");

//     for(i=0; i<len; i++)
//     {
//         for(j=0; j<4; j++)
//             arr[i][j]=rrr[i][j];
//     }
// }
// int main(void)
// {
//     int i, j;
//     int arr[4][4]=
//     {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12},
//         {13, 14, 15, 16}
//     };
//     for(i=0; i<4; i++)
//     {
//         for(j=0; j<4; j++)
//             printf("%2d ", arr[i][j]);
//         printf("\n");
//     }
//     printf("\n");
//     rotation(arr, sizeof(arr)/sizeof(arr[0]));
//     rotation(arr, sizeof(arr)/sizeof(arr[0]));
//     rotation(arr, sizeof(arr)/sizeof(arr[0]));
//     return 0;
// }

// 문제 2
// void Snail(int num)
// {
//     int arr[num][num];
//     int i;
//     int k=0;
//     int one=0;

//     while(k<num-2)
//     {
//         for(i=k; i<num-k; i++)
//             arr[k][i] = ++one;
//         for(i=k+1; i<num-k; i++)
//             arr[i][(num-k)-1] = ++one;
//         for(i=(num-k)-2; i>=k; i--)
//             arr[(num-k)-1][i] = ++one;
//         for(i=(num-k)-2; i>k; i--)
//             arr[i][k] = ++one;
//         k++;
//     }        
//     for(i=0; i<num; i++)
//     {
//         for(int j=0; j<num; j++)
//             printf("%3d ", arr[i][j]);
//         printf("\n");
//     }                                                                                                                          
// }
// int main(void)
// {
//     int num;
//     int i, j;
//     printf("insert: ");
//     scanf("%d", &num);
//     Snail(num);
//     return 0;
// }

// 문제 3
// #include <stdlib.h>

// int main(void)
// {
//     int i;
//     printf("난수의 범위: 0부터 %d까지 \n", 99);
//     for(i=0; i<5; i++)
//         printf("난수 출력: %d\n", rand()%100);
//     return 0;
// }

// 문제 4
// #include <stdlib.h>
// #include <time.h>

// int main(void)
// {
//     int i;
//     srand((int)time(NULL));
//     for(i=0; i<2; i++)
//         printf("dice result: %d\n", rand()%6+1);
//     return 0;
// }

// 문제 5
// #include <stdlib.h>
// #include <time.h>

// int main(void)
// {
//     int me, com;
//     int win=0, draw=0;
//     char *arr[]={"\0", "바위", "가위", "보"};  
//     srand((int)time(NULL));
    
//     while(1)
//     {
//         printf("바위는 1, 가위는 2, 보는 3: ");
//         scanf("%d", &me);
//         com = rand()%3+1;
//         printf("당신은 %s선택, 컴퓨터는 %s선택, ", arr[me], arr[com]);
//         if(me==1) // 내가 바위
//         {
//             if(com==1)
//             {
//                 printf("비겼습니다!\n");
//                 draw++;
//             }
//             else if(com==2)
//             {
//                 printf("이겼습니다!\n");
//                 win++;
//             }
//             else
//             {
//                 printf("졌습니다!\n");
//                 break;
//             }
//         }
//         if(me==2) // 내가 가위
//         {
//             if(com==2)
//             {
//                 printf("비겼습니다!\n");
//                 draw++;
//             }
//             else if(com==3)
//             {
//                 printf("이겼습니다!\n");
//                 win++;
//             }
//             else
//             {
//                 printf("졌습니다!\n");
//                 break;
//             }
//         }
//         if(me==3) // 내가 보
//         {
//             if(com==3)
//             {
//                 printf("비겼습니다!\n");
//                 draw++;
//             }
//             else if(com==1)
//             {
//                 printf("이겼습니다!\n");
//                 win++;
//             }
//             else
//             {
//                 printf("졌습니다!\n");
//                 break;
//             }
//         }
//     }
//     printf("게임의 결과 : %d승, %d무", win, draw);
//     return 0;
// }

// 문제 6
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int com[3];
    int me[3];
    int i, j, cnt=1;
    int strike;
    srand((int)time(NULL));
    for (i = 0; i < 3; i++)
    {
        com[i]=rand()%10;
        if(i==1 && com[0]==com[1])
            i--;
        else if(i==2 && ((com[0]==com[2]) || (com[1]==com[2])))
            i--;
    }
    
    printf("Start Game!\n");
    while (1)
    {
        int strike=0;
        int ball=0;
        printf("3개의 숫자 선택: ");
        scanf("%d%d%d", &me[0], &me[1], &me[2]);

        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                if(me[j]==com[i] && j==i)
                    strike++;
                else if(me[j]==com[i] && j!=i)
                    ball++;
            }
        }
        printf("%d번째 도전결과: %d strike, %d ball\n", cnt, strike, ball);
        cnt++;
        if(strike==3)
        {   printf("Game End\n");
            break;
        }
    }
    
}