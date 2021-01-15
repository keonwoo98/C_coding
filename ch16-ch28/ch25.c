#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//ReadStringFault1
// char * ReadUserName(char *name)
// {
//     printf("name: ");
//     gets(name);
//     return name;
// }
// int main(void)
// {
//     char name1[30];
//     char name2[30];
//     ReadUserName(name1);
//     printf("name1: %s\n", name1);
//     ReadUserName(name2);
//     printf("name2: %s\n", name2);
//     printf("name1: %s\n", ReadUserName(name1));
//     printf("name2: %s\n", ReadUserName(name2));
//     return 0;
// }

// 문제 1
// int main(void)
// {
//     int num, i, len;
//     printf("최대길이: ");
//     scanf("%d", &num);
//     getchar();
//     char * str;
//     str=(char*)malloc(sizeof(char)*num+1);
//     printf("문자열 입력: ");
//     fgets(str,num+1,stdin);
//     str[strlen(str)-1]=0;
//     len=strlen(str);

//     for(i=len; i>0; i--)
//     {
//         if(str[i]==' ')
//         {
//             printf("%s ", &str[i+1]);
//             str[i]=0;
//         }
//     }
//     printf("%s ", &str[0]);
//     free(str);
//     return 0;
// }

// 문제 2
int main(void)
{
    int arrlen=5;
    int idx=0;
    int i;
    int * arr=(int*)malloc(sizeof(int)*arrlen);

    while(1)
    {
        printf("input number: ");
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
    for(i=0; i<idx; i++)
        printf("%d ",arr[i]);
    free(arr);
    return 0;
}