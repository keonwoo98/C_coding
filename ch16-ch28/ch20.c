#include <stdio.h>

// 문제 1
void rotation(int(*arr)[4], int len)
{
    int i, j;
    int rrr[4][4];
    int k=3;
    for(i=0; i<len; i++)
    {
        for(j=0; j<4; j++)
        {
            rrr[j][k]=arr[i][j];
        }
        k--;
    }
    for(i=0; i<len; i++)
    {
        for(j=0; j<4; j++)
            printf("%2d ", rrr[i][j]);
        printf("\n");
    }
    printf("\n");

    for(i=0; i<len; i++)
    {
        for(j=0; j<4; j++)
            arr[i][j]=rrr[i][j];
    }
}
int main(void)
{
    int i, j;
    int arr[4][4]=
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
            printf("%2d ", arr[i][j]);
        printf("\n");
    }
    printf("\n");
    rotation(arr, sizeof(arr)/sizeof(arr[0]));
    rotation(arr, sizeof(arr)/sizeof(arr[0]));
    rotation(arr, sizeof(arr)/sizeof(arr[0]));
    return 0;
}