#include <stdio.h>

// 문제 1-1
// int main(void)
// {
//     FILE * fp=fopen("mystory.txt", "wt");
//     fputs("#이름: 김건우\n", fp);
//     fputs("#주민번호: 980101-1010010\n", fp);
//     fputs("#전화번호: 010-1111-2222\n", fp);
//     fclose(fp);
//     return 0;
// }

// 문제 1-2
// int main(void)
// {
//     FILE * fp=fopen("mystory.txt", "at");
//     fputs("#즐겨먹는 음식: 짬뽕, 탕수육\n", fp);
//     fputs("#취미: 축구\n", fp);
//     fclose(fp);
//     return 0;
// }

// 문제 1-3
// int main(void)
// {
//     char str[50];
//     FILE * fp=fopen("mystory.txt", "rt");

//     while(fgets(str, sizeof(str), fp)!=NULL)
//         printf("%s", str);

//     fclose(fp);
//     return 0;
// }

// 문제 2-1
#include <string.h>
long GetFileSize(FILE * fp);

int main(void)
{
    char str[100];
    FILE * fp=fopen("mystory.txt", "rt");
    fgets(str, 100, fp);
    fputs(str, stdout);
    printf("File Size: %ld\n", GetFileSize(fp));
    fgets(str, 100, fp);
    fputs(str, stdout);
    printf("File Size: %ld\n", GetFileSize(fp));
    fgets(str, 100, fp);
    fputs(str, stdout);
    printf("File Size: %ld\n", GetFileSize(fp));
    fclose(fp);
    return 0;
}
long GetFileSize(FILE * fp)
{
    long fpos;
    long fsize;
    fpos=ftell(fp);

    fseek(fp, 0, SEEK_END);
    fsize=ftell(fp);
    fseek(fp, fpos, SEEK_SET);
    return fsize;
}