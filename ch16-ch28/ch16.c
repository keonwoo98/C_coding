#include <stdio.h>

// 문제 1-1
// int main(void)
// {
//     int arr[3][9];
//     int i, j;
//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<9; j++)
//         {
//             arr[i][j]=(i+2)*(j+1);
//         }
//     }
//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<9; j++)
//             printf("%d ", arr[i][j]);
//         printf("\n");
//     }
// }

// 문제 1-2
// int main(void)
// {
//     int arr[2][4]={
//         {1, 2, 3, 4},
//         {5, 6, 7, 8}
//     };
//     int brr[4][2];
//     int i, j;
//     for(i=0; i<2; i++)
//     {
//         for(j=0; j<4; j++)
//         {
//             brr[j][i]=arr[i][j];
//         }
//     }
//     for(i=0; i<4; i++)
//     {
//         for(j=0; j<2; j++)
//             printf("%2d ", brr[i][j]);
//         printf("\n");
//     }
//     return 0;
// }

// 문제 1-3
// int main(void)
// {
//     int arr[5][5];
//     int i, j;
//     printf("국어 영어 수학 국사순으로 성적 입력하시오.\n");
//     for(i=0; i<4; i++)
//     {
//         for(j=0; j<4; j++)
//         {
//             printf("입력: ");
//             scanf("%d", &arr[i][j]);
//         }
//         printf("다음 학생\n");
//     }
//     for(i=0; i<5; i++)
//     {
//         arr[4][i]=0;
//         arr[i][4]=0;
//     }
//     for(i=0; i<4; i++)
//     {
//         for(j=0; j<4; j++)
//         {
//             arr[4][i]+=arr[j][i];
//         }
//     }
//     for(i=0; i<4; i++)
//     {
//         for(j=0; j<4; j++)
//         {
//             arr[i][4]+=arr[i][j];
//         }
//     }
//     for(i=0; i<4; i++)
//         arr[4][4]+=arr[4][i];
//     for(i=0; i<5; i++)
//     {
//         for(j=0; j<5; j++)
//             printf("%2d ", arr[i][j]);
//         printf("\n");
//     }
//     return 0;
// }

int record[5][5];

void WriteRecord(void)
{
    int sum;
    int i, j;
    for(i=0; i<4; i++)
    {
        sum=0;
        printf("%d번째 학생의 성적 입력: \n", i+1);
        for(j=0; j<4; j++)
        {
            printf("과목 %d: ", j+1);
            scanf("%d", &record[i][j]);
            sum += record[i][j];
        }
        record[i][4]=sum;
    }
}
void WriteSumRecord(void)
{
    int sum=0;
    int i, j;
    for(i=0; i<4; i++)
    {
        sum=0;
        for(j=0; j<4; j++)
            sum+=record[j][i];
        record[4][i]=sum;
        record[4][4]+=sum;
    }
}
void ShowAllRecord(void)
{
    int i, j;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
            printf("%3d ", record[i][j]);
        printf("\n");
    }
}
int main(void)
{
    WriteRecord();
    WriteSumRecord();
    ShowAllRecord();
    return 0;
}