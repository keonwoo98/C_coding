#include <stdio.h>

// 문제 1
// void odd(int arr[], int size)
// {
//     int i;
//     printf("odd num: ");
//     for(i=0; i<size; i++)
//     {
//         if(arr[i]%2!=0)
//             printf("%d ", arr[i]);
//     }
//     printf("\n");
// }
// void even(int arr[], int size)
// {
//     int i;
//     printf("even num: ");
//     for(i=0; i<size; i++)
//     {
//         if(arr[i]%2==0)
//             printf("%d ", arr[i]);
//     }
// }
// int main(void)
// {
//     int arr[10];
//     int i;
//     for(i=0; i<10; i++)
//     {
//         printf("insert: ");
//         scanf("%d", &arr[i]);
//     }
//     odd(arr, 10);
//     even(arr, 10);
//     return 0;
// }

// 문제 2
// void tentwo(int num)
// {
//     if(num<2)
//         printf("%d", num);
//     else
//     {
//         tentwo(num/2);
//         printf("%d", num%2);
//     }
// }
// int main(void)
// {
//     int num;
//     printf("deci number: ");
//     scanf("%d", &num);
//     tentwo(num);
//     return 0;
// }

// 문제 3
// int main(void)
// {
//     int arr[10];
//     int i;
//     for(i=0; i<10; i++)
//     {
//         printf("insert: ");
//         scanf("%d", &arr[i]);
//     }
//     printf("배열 요소의 출력: ");
//     for(i=0; i<10; i++)
//     {
//         if(arr[i]%2!=0)
//             printf("%d ", arr[i]);
//     }
//     for(i=9; i>=0; i--)
//     {
//         if(arr[i]%2==0)
//             printf("%d ", arr[i]);
//     }
//     return 0;
// }

// 문제 4
// void Pal(char voca[50])
// {
//     int i=0, len=0, cnt;
//     while(voca[len]!=0)
//         len++;
//     for(i=0; i<len/2; i++)
//     {
//         if(voca[i]==voca[(len-i)-1])
//             continue;
//         else
//             cnt += 1;
//     }
//     if(cnt == 0)
//         printf("Yes");
//     else
//         printf("No");
// }
// int main(void)
// {
//     char voca[50];
//     printf("word: ");
//     scanf("%s", voca);
//     Pal(voca);
//     return 0;
// }

// 문제 5
void DesSort(int arr[])
{
    int i, j, temp;
    for(j=0; j<6; j++)
    {
        for(i=0; i<(6-j); i++)
        {
            if(arr[i]<arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    for(i=0; i<7; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main(void)
{
    int arr[7];
    int i;
    for(i=0; i<7; i++)
    {
        printf("insert: ");
        scanf("%d", &arr[i]);
    }
    DesSort(arr);
    return 0;
}