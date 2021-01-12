#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 문제 1
// void Rota(int (*arr)[4])
// {
//     int rrr[4][4];
//     int i, j, k=0;
//     for(j=3; j>=0; j--)
//     {
//         for(i=0; i<4; i++)
//             rrr[i][j]=arr[k][i];
//         k++;
//     }
//     for(i=0; i<4; i++)
//     {
//         for(j=0; j<4; j++)
//             printf("%3d ", rrr[i][j]);
//         printf("\n");
//     }
//     printf("\n");
//     for(i=0; i<4; i++)
//     {
//         for(j=0; j<4; j++)
//             arr[i][j]=rrr[i][j];
//     }
// }
// int main(void)
// {
//     int i, j;
//     int arr[4][4]={
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12},
//         {13, 14, 15, 16}
//     };

//     for(i=0; i<4; i++)
//     {
//         for(j=0; j<4; j++)
//             printf("%3d ", arr[i][j]);
//         printf("\n");
//     }
//     printf("\n");
//     Rota(arr);
//     Rota(arr);
//     Rota(arr);
//     return 0;
// }

// 문제 2
// void snail(int num)
// {
//     int arr[num][num];
//     int i;
//     int k=0;
//     int one=0;

//     while (k<num-2)
//     {
//         for(i=k; i<num-k; i++)
//             arr[k][i]=++one;
//         for(i=k+1; i<num-k; i++)
//             arr[i][(num-k)-1]=++one;
//         for(i=(num-k)-2; i>=k; i--)
//             arr[(num-k)-1][i]=++one;
//         for(i=(num-k)-2; i>k; i--)
//             arr[i][k]=++one;
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
//     printf("?x?: ");
//     scanf("%d", &num);
//     snail(num);
//     return 0;
// }

// 문제 3
// int main(void)
// {
//     int i;
//     printf("난수의 범위: 0부터 99까지 \n");
//     for(i=0; i<5; i++)
//         printf("난수 출력: %d \n", rand()%100);
//     return 0;
// }

// 문제 4
// int main(void)
// {
//     int i;
//     srand((int)time(NULL));
//     for(i=0; i<2; i++)
//     {
//         printf("dice: %d\n", rand()%6+1);
//     }
//     return 0;
// }

// 문제 2
// void snail(int num)
// {
//     int arr[num][num];
//     int i;
//     int k=0;
//     int one=0;

//     while(k<num-2)
//     {
//         for(i=k; i<(num-k); i++)
//             arr[k][i]=++one;
//         for(i=k+1; i<(num-k); i++)
//             arr[i][(num-k)-1]=++one;
//         for(i=(num-k)-2; i>=k; i--)
//             arr[(num-k)-1][i]=++one;
//         for(i=(num-k)-2; i>k; i--)
//             arr[i][k]=++one;
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
//     printf("?x?: ");
//     scanf("%d", &num);
//     snail(num);
//     return 0;
// }

// 문제 5
// int main(void)
// {
//     int me;
//     int com;
//     int win=0;
//     int draw=0;
//     int cnt=0;

//     srand((int)time(NULL));

//     while (cnt==0)
//     {
//         printf("바위는 1, 가위는 2, 보는 3: ");
//         scanf("%d", &me);
//         com=rand()%3+1;

//         if (me==1)
//         {
//                 if(com==1)
//                 {
//                     printf("당신은 바위 선택, 컴퓨터는 바위 선택, 비겼습니다!\n");
//                     draw++;
//                 }
//                 else if (com==2)
//                 {
//                     printf("당신은 바위 선택, 컴퓨터는 가위 선택, 이겼습니다!\n");
//                     win++;
//                 }
//                 else
//                 {
//                     printf("당신은 바위 선택, 컴퓨터는 보 선택, 졌습니다!\n");
//                     printf("%d승, %d무", win, draw);
//                     cnt++;
//                 }
//         }
//         else if (me==2)
//         {
//                 if(com==1)
//                 {
//                     printf("당신은 가위 선택, 컴퓨터는 바위 선택, 졌습니다!\n");
//                     printf("%d승, %d무", win, draw);
//                     cnt++;
//                 }
//                 else if (com==2)
//                 {
//                     printf("당신은 가위 선택, 컴퓨터는 가위 선택, 비겼습니다!\n");
//                     draw++;
//                 }
//                 else
//                 {
//                     printf("당신은 가위 선택, 컴퓨터는 보 선택, 이겼습니다!\n");
//                     win++;
//                 }
//         }
//         else if (me==3)
//         {
//                 if(com==1)
//                 {
//                     printf("당신은 보 선택, 컴퓨터는 바위 선택, 이겼습니다!\n");
//                     win++;
//                 }
//                 else if (com==2)
//                 {
//                     printf("당신은 보 선택, 컴퓨터는 가위 선택, 졌습니다!\n");
//                     printf("%d승, %d무", win, draw);
//                     cnt++;
//                 }
//                 else
//                 {
//                     printf("당신은 보 선택, 컴퓨터는 보 선택, 비겼습니다!\n");
//                     draw++;
//                 }
//         }
//     }
//     return 0;
// }

// 문제 6
int main(void)
{
    int com[3];
    int me[3];
    int i, j, cnt=1;
    int scnt;
    
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
        int scnt=0, bcnt=0;
        
        printf("choose 3 num: ");
        scanf("%d%d%d", &me[0], &me[1], &me[2]);
        
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                if(me[i]==com[j] && i==j)
                    scnt++;
                else if(me[i]==com[j] && j!=i)
                    bcnt++;
            }
        }
        printf("%d번째 도전결과: %d strike, %d ball\n", cnt, scnt, bcnt);
        cnt++;
        if(scnt==3)
        {
            printf("Game End\n");
            break;
        }
    }
    return 0;
}