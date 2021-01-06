#include <stdio.h>

// 문제 1-1
// int main(void)
// {
//     int arr[5];
//     int max, min, sum, i;
//     for(i=0; i<5; i++)
//     {
//         printf("insert: ");
//         scanf("%d", &arr[i]);
//     }
//     max=min=sum=arr[0];
//     for(i=1; i<5; i++)
//     {
//         sum+=arr[i];
//         if(max<arr[i])
//             max=arr[i];
//         if(min>arr[i])
//             min=arr[i];
//     }
//     printf("max: %d\nmin: %d\nsum: %d", max, min, sum);
//     return 0;
// }

// 문제 1-2
// int main(void)
// {
//     int i;
//     char arr[]={'G','o','o','d',' ','t','i','m','e'};
//     int arrLen = sizeof(arr) / sizeof(char);
//     for(i=0; i<arrLen; i++)
//     {
//         printf("%c", arr[i]);
//     }
//     return 0;
// }

// 문제 2-1
// int main(void)
// {
//     char arr[100];
//     int len=0;
//     printf("insert: ");
//     scanf("%s", arr);
//     while(arr[len]!=0)
//         len++;
//     printf("%d", len);
//     return 0;
// }

// 문제 2-2
// int main(void)
// {
//     char arr[100];
//     int i;
//     int len=0;
//     printf("insert: ");
//     scanf("%s", arr);
//     while(arr[len]!=0)
//     {
//         len++;
//     }
//     for(i=len; i>=0; i--)
//     {
//         printf("%c", arr[i]);
//     }
//     return 0;
// }

// 문제 2-2
// int main(void)
// {
//     char voca[100];
//     int len=0, i;
//     char temp;

//     printf("영단어 입력: ");
//     scanf("%s", voca);

//     while(voca[len] != '\0')
//         len++;

//     for(i=0; i<len/2; i++)
//     {
//         temp=voca[i];
//         voca[i]=voca[(len-i)-1];
//         voca[(len-i)-1]=temp;
//     }
//     printf("%s\n", voca);
//     return 0;
// }

// 문제 2-3
int main(void)
{
    char voca[100];
    int max;
    int vocaLen=0, i;

    printf("insert word: ");
    scanf("%s", voca);

    while(voca[vocaLen]!=0)
        vocaLen++;

    for(i=0; i<vocaLen; i++)
    {
        if(max<voca[i])
            max=voca[i];
    }
    printf("%c", max);
    return 0;
}