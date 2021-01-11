#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// int main(void)
// {
//     int ch;
//     while(1)
//     {
//         ch=getchar();
//         if(ch==EOF)
//             break;
//         putchar(ch);
//     }
//     return 0;
// }

// 문제 1-1
// int main(void)
// {
//     int ch;
//     ch=getchar();
//     if(ch>=65 && ch<=90)
//         ch+=32;
//     else if(ch>=97 && ch<=122)
//         ch-=32;
//     else
//         printf("error");
//     putchar(ch);
//     return 0;
// }

// 문제 1-1
// int ConvCase(int ch)
// {
//     int diff='a'-'A';
//     if(ch>='A' && ch<='Z')
//         return ch+diff;
//     else if(ch>='a' && ch<='z')
//         return ch-diff;
//     else
//         return -1;
// }
// int main(void)
// {
//     int ch;
//     printf("insert: ");
//     ch=getchar();
//     ch=ConvCase(ch);
//     if(ch==-1)
//     {
//         puts("out of range");
//         return -1;
//     }
//     putchar(ch);
//     return 0;
// }

// int main(void)
// {
//     char str[7];
//     int i;

//     for(i=0; i<3; i++)
//     {
//         fgets(str, sizeof(str), stdin);
//         printf("Read %d: %s \n", i+1, str);
//     }
//     return 0;
// }

// void Clear(void)
// {
//     while(getchar()!='\n');
// }
// int main(void)
// {
//     char perID[7];
//     char name[10];

//     fputs("주민번호 앞 6자리 입력: ", stdout);
//     fgets(perID, sizeof(perID), stdin);
//     Clear();

//     fputs("이름 입력: ", stdout);
//     fgets(name, sizeof(name), stdin);

//     printf("주민번호: %s\n", perID);
//     printf("이름: %s", name);
//     return 0;
// }

// void Remove(char str[])
// {
//     int len=strlen(str);
//     str[len-1]=0;
// }
// int main(void)
// {
//     char str[100];
//     printf("insert: ");
//     fgets(str, sizeof(str), stdin);
//     printf("length: %d, content: %s\n", strlen(str), str);

//     Remove(str);
//     printf("length: %d, content: %s\n", strlen(str), str);
//     return 0;
// }

// int main(void)
// {
//     char str1[20]="1234567890";
//     char str2[20];
//     char str3[5];

//     strcpy(str2, str1);
//     puts(str2);

//     strncpy(str3, str1, sizeof(str3)-1);
//     str3[sizeof(str3)-1]=0;
//     puts(str3);
//     return 0;
// }


// 문제 2-1
// int ConvToInt(char c)
// {
//     static int diff='1'-1;
//     return c-diff;
// }
// int main(void)
// {
//     char str[20];
//     int sum=0;
//     printf("insert: ");
//     fgets(str, sizeof(str), stdin);
//     for(int i=0; i<strlen(str); i++)
//     {
//         if(str[i]>='1' && str[i]<='9')
//             sum += ConvToInt(str[i]); //str[i]-48
//     }
//     printf("result: %d", sum);
//     return 0;
// }

// 문제 2-2
// void Remove(char str[])
// {
//     int len=strlen(str);
//     str[len-1]=0;
// }
// int main(void)
// {
//     char str1[20];
//     char str2[20];
//     char str3[40];
//     printf("insert: ");
//     fgets(str1, sizeof(str1), stdin);
//     Remove(str1);
//     printf("insert: ");
//     fgets(str2, sizeof(str2), stdin);
//     Remove(str2);
//     strcpy(str3, str1);
//     strcat(str3, str2);
//     printf("str3: ");
//     puts(str3);
//     return 0;
// }

// 문제 2-3
int GetSpace(char str[])
{
    int i;
    for(i=0; i<strlen(str); i++)
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

    if(idx1 != idx2)
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

    printf("insert: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1)-1]=0;
    printf("insert: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strlen(str2)-1]=0;

    if(CompName(str1, str2))
        puts("Same name");
    else
        puts("Different name");
    
    if(CompAge(str1, str2))
        puts("Same age");
    else
        puts("Different age");  

    return 0;
}