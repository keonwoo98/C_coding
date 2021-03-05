#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
// int main(void)
// {
//     int n;
//     int i;
//     int len = 0;
//     int arr[10];
//     printf("10진수 입력 : ");
//     scanf("%d", &n);
//     printf("%d에 대한 2진수 : ", n);
//     while(n != 0)
//     {
//         arr[len] = n % 2;
//         len++;
//         n = n / 2;
//     }
//     for(i = len - 1; i >= 0; i--)
//         printf("%d", arr[i]);

//     return 0;
// }

// 문제 3
// int main(void)
// {
//     int arr[10];
//     int n;
//     int j = 0;
//     int k = 9;
//     for(int i = 0; i < 10; i++)
//     {
//         printf("insert(%d) : ", i + 1);
//         scanf("%d", &n);
//         if(n % 2 == 1)
//             arr[j++] = n;
//         else
//             arr[k--] = n;
//     }
//     printf("배열 요소 출력 : ");
//     for(int i = 0; i < 10; i++)
//         printf("%d ", arr[i]);

//     return 0;
// }

// 문제 4
// int Palindrome(char arr[])
// {
//     int len = strlen(arr);
//     for(int i = 0; i < len / 2; i++)
//     {
//         if(arr[i] != arr[(len - i) - 1])
//             return 0;
//     }
//     return 1;
// }

// int main(void)
// {
//     char arr[50];
//     printf("word : ");
//     scanf("%s", arr);
//     if(Palindrome(arr))
//         puts("회문 입니다.");
//     else
//         puts("회문이 아닙니다.");

//     return 0;
// }

// 문제 5
#define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)

void DesSort(int arr[], int n)
{
    int i, j;
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < (n - i) - 1; j++)
        {
            if(arr[j] < arr[j + 1])
                swap(int, arr[j], arr[j + 1]);
        }
    }
}

int main(void)
{
    int n;
    int *x;
    printf("요소 개수 : ");
    scanf("%d", &n);
    x = calloc(n, sizeof(int));

    for(int i = 0; i < n; i++)
    {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }

    DesSort(x, n);

    printf("\n내림차순 정렬\n");
    for(int i = 0; i < n; i++)
        printf("x[%d] : %d\n", i, x[i]);
    putchar('\n');

    free(x);
    return 0;
}