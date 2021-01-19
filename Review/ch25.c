#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 문제 2-1
// int main(void)
// {
//     int len;
//     printf("길이: ");
//     scanf("%d", &len);
//     getchar();
//     char * str=(char*)malloc(sizeof(char)*len+1);
//     printf("문자열 입력: ");
//     fgets(str, len+1, stdin);
//     str[strlen(str)-1]=0;

//     for(int i=len; i>=0; i--)
//     {
//         if(str[i]==' ')
//         {
//             printf("%s ", &str[i+1]);
//             str[i]=0;
//         }
//     }
//     printf("%s", &str[0]);
//     free(str);
//     return 0;
// }

// 문제 2-2
int main(void)
{
    int idx=0;
    int arrlen=5;
    int *arr=(int*)malloc(sizeof(int)*arrlen);

    while(1)
    {
        printf("insert num: ");
        scanf("%d", &arr[idx]);
        if(arr[idx]==-1)
            break;

        if(arrlen==idx+1)
        {
            arrlen+=3;
            arr=(int*)realloc(arr, sizeof(int)*arrlen);
        }
        idx++;
    }
    for(int i=0; i<idx; i++)
        printf("%d ", arr[i]);
    free(arr);
    return 0;
}