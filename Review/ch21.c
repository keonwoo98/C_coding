#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// NeedInputBufFluch
// int main(void)
// {
//     char perID[7];
//     char name[10];

//     fputs("주민번호 앞 6자리 입력: ", stdout);
//     fgets(perID, sizeof(perID), stdin);
//     while(getchar()!='\n');

//     fputs("이름 입력: ", stdout);
//     fgets(name, sizeof(name), stdin);

//     printf("주민번호 앞 6자리: %s\n", perID);
//     printf("이름: %s\n", name);
//     return 0;
// }

// StingComp
// int main(void)
// {
//     char str1[]="My String";
//     char str2[]="My string";
    
//     if(!strcmp(str1, str2))
//         puts("equal");
//     else
//         puts("not equal");
//     return 0;
// }

// 문제 1
// int ConvToInt(char c)
// {
//     return c-48;
// }
// int main(void)
// {
//     char str[50];
//     printf("string: ");
//     fgets(str, sizeof(str), stdin);

//     int len=strlen(str);
//     int sum=0;

//     for(int i=0; i<len; i++)
//     {
//         if(str[i]>='1' && str[i]<='9')
//             sum += ConvToInt(str[i]);
//     }
//     printf("Sum: %d\n", sum);
//     return 0;
// }

// 문제 2
// int main(void)
// {
//     char str1[20];
//     char str2[20];
//     char str3[40];

//     printf("str1: ");
//     fgets(str1, sizeof(str1), stdin);
//     str1[strlen(str1)-1]=0;
//     printf("str2: ");
//     fgets(str2, sizeof(str2), stdin);
//     str2[strlen(str2)-1]=0;

//     strcpy(str3, str1);
//     strcat(str3, str2);

//     printf("%s", str3);
//     return 0;
// }

// 문제 3
int GetSpace(char str[])
{
    int len, i;
    len=strlen(str);
    for(i=0; i<len; i++)
    {
        if(str[i]==' ')
            return i;
    }
    return -1;
}
int CompName(char str1[], char str2[])
{
    int idx1=GetSpace(str1);
    int idx2=GetSpace(str2);

    if(idx1!=idx2)
        return 0;
    else
        return !strncmp(str1, str2, idx1);
}
int CompAge(char str1[], char str2[])
{
    int idx1=GetSpace(str1);
    int idx2=GetSpace(str2);
    int ag1, ag2;

    ag1=atoi(&str1[idx1+1]);
    ag2=atoi(&str2[idx2+1]);

    if(ag1==ag2)
        return 1;
    else
        return 0;
}
int main(void)
{
    char str1[20];
    char str2[20];

    printf("person 1: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1)-1]=0;
    printf("person 2: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strlen(str2)-1]=0;

    if(CompName(str1, str2))
        puts("Same Name");
    else
        puts("Different Name");
    
    if(CompAge(str1, str2))
        puts("Same Age");
    else
        puts("Different Age");
    
    return 0;
}