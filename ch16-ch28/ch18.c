#include <stdio.h>

// 복습
// void Swap(int *p1, int *p2)
// {
//     int temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
// }
// void Swap2(int *p1, int *p2)
// {
//     int *temp = p1;
//     p1 = p2;
//     p2 = temp;
// }
// void Dp(int **dp1, int **dp2)
// {
//     int *temp = *dp1;
//     *dp1 = *dp2;
//     *dp2 = temp;
// }
// int main(void)
// {
//     int num1=10, num2=20;
//     int *ptr1=&num1;
//     int *ptr2=&num2;
//     printf("%d %d\n", *ptr1, *ptr2);
//     Dp(&ptr1, &ptr2);
//     printf("%d %d", *ptr1, *ptr2);
//     return 0;
// }

// 문제 1-1
// int main(void)
// {
//     int *arr1[5];
//     int *arr2[3][5];

//     int **dptr1=arr1;
//     int *(*dptr2)[5]=arr2;
// }

// 문제 1-2
// void SimpleFuncOne(int *arr1, int *arr2) {}
// void SimpleFuncTwo(int (*arr3)[4], int (*arr4)[4]) {}
// int main(void)
// {
//     int arr1[3];
//     int arr2[4];
//     int arr3[3][4];
//     int arr4[2][4];

//     SimpleFuncOne(arr1, arr2);
//     SimpleFuncTwo(arr3, arr4);
// }

// 문제 1-3
void ComplexFuncOne(int **arr1, int *(*arr2)[5]) {}
void ComplexFuncTwo(int ***arr3, int ***(*arr4)[5]) {}
int main(void)
{
    int *arr1[3];
    int *arr2[3][5];
    int **arr3[5];
    int ***arr4[3][5];

    ComplexFuncOne(arr1, arr2);
    ComplexFuncTwo(arr3, arr4);
}