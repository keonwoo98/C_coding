#include <stdio.h>

// 문제 1
// void Odd(int arr[], int n)
// {
//     int i;
//     printf("Odd Numbers : ");
//     for(i = 0; i < n; i++)
//     {
//         if(arr[i] % 2 == 1)
//             printf("%d ", arr[i]);
//     }
//     putchar('\n');
// }

// void Even(int arr[], int n)
// {
//     int i;
//     printf("Even Numbers : ");
//     for(i = 0; i < n; i++)
//     {
//         if(arr[i] % 2 == 0)
//             printf("%d ", arr[i]);
//     }
//     putchar('\n');
// }

// int main(void)
// {
//     int n;
//     printf("배열의 크기 : ");
//     scanf("%d", &n);
//     int arr[n];
//     for(int i = 0; i < n; i++)
//     {
//         printf("arr[%d] : ", i);
//         scanf("%d", &arr[i]);
//     }
//     Odd(arr, n);
//     Even(arr, n);

//     return 0;
// }

// 문제 2
int main(void)
{
    int n;
    int i = 0;
    int len = 0;
    int arr[100];
    printf("10진수 입력 : ");
    scanf("%d", &n);
    printf("%d에 대한 2진수 : ", n);
    while(n != 0)
    {
        arr[i] = n % 2;
        i++;
        n = n / 2;
    }
    while(arr[len] != '\0')
        len++;
    for(i = len; i >= 0; i--)
        printf("%d", arr[i]);

    return 0;
}