#include <stdio.h>

// 문제 1-1
// int SquareByValue(int num)
// {
//     return num*num;
// }
// void SquareByReference(int *ptr)
// {
//     int num = *ptr;
//     *ptr = num*num;
// }
// int main(void)
// {
//     int num;
//     printf("number: ");
//     scanf("%d", &num);
//     printf("%d\n", SquareByValue(num));
//     SquareByReference(&num);
//     printf("%d", num);
//     return 0;
// }

// 문제 1-2
void Swap3(int *ptr1, int *ptr2, int *ptr3)
{
    int temp;
    temp=*ptr3;
    *ptr3=*ptr2;
    *ptr2=*ptr1;
    *ptr1=temp;
}
int main(void)
{
    int num1, num2, num3;
    printf("insert: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    Swap3(&num1, &num2, &num3);
    printf("%d %d %d", num1, num2, num3);
    return 0;
}