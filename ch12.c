#include <stdio.h>

// 문제 1-1
// int main(void)
// {
//     int num=10;
//     int * ptr1=&num;
//     int * ptr2=ptr1;

//     (*ptr1)++;
//     (*ptr2)++;
//     printf("%d\n", num);
//     return 0;
// }

// 문제 1-2
int main(void)
{
    int num1=10, num2=20;
    int *ptr1=&num1;
    int *ptr2=&num2;
    int *temp;

    (*ptr1)+=10;
    (*ptr2)-=10;
    temp=ptr1;
    ptr1=ptr2;
    ptr2=temp;

    printf("%d %d\n", *ptr1, *ptr2);
    printf("%d %d", num1, num2);
    return 0;
}