#include <stdio.h>

// FirstFileWrite
// int main(void)
// {
//     FILE * fp=fopen("data.txt", "wt");
//     if(fp==NULL)
//     {
//         puts("File open fail!");
//         return -1;
//     }
//     fputs("AAA\n", fp);
//     fputs("BBB\n", fp);
//     fputs("CCC\n", fp);
//     fclose(fp);
//     return 0;
// }

// FirstFileRead
// int main(void)
// {
//     int i;
//     char ch[10];
//     FILE * fp=fopen("data.txt", "rt");
//     if(fp==NULL)
//     {
//         puts("File open fail!");
//         return -1;
//     }
//     for(i=0; i<3; i++)
//     {
//         fgets(ch, sizeof(ch), fp);
//         printf("%s", ch);
//     }
//     fclose(fp);
//     return 0;
// }

// TextCharFileCopy
// int main(void)
// {
//     FILE * fp=fopen("data1.txt", "wt");

//     FILE * data=fopen("data.txt", "rt");
//     FILE * data1=fopen("data1.txt", "wt");
//     int ch;

//     if(data==NULL || data1==NULL)
//     {
//         puts("File open fail!");
//         return -1;
//     }

//     while((ch=fgetc(data))!=EOF)
//         fputc(ch, data1);
    
//     if(feof(data)!=0)
//         puts("File copied!");
//     else
//         puts("File uncopied!");
    
//     fclose(data);
//     fclose(data1);
//     return 0;
// }

// TextStringFileCopy
// int main(void)
// {
//     FILE * fp=fopen("data2.txt", "wt");

//     FILE * src=fopen("data1.txt", "rt");
//     FILE * des=fopen("data2.txt", "wt");
//     char str[20];

//     if(src==NULL || des==NULL)
//     {
//         puts("File open fail!");
//         return -1;
//     }

//     while(fgets(str, sizeof(str), src)!=NULL)
//         fputs(str, des);
    
//     if(feof(src)!=0)
//         puts("File copied!");
//     else
//         puts("File uncopied!");
    
//     fclose(src);
//     fclose(des);
//     return 0;
// }

// BinaryFileCopy
// int main(void)
// {
//     FILE * src=fopen("src.bin", "rb");
//     FILE * des=fopen("dst.bin", "wb");
//     char buf[20];
//     int readCnt;

//     if(src==NULL || des==NULL)
//     {
//         puts("File open fail!");
//         return -1;
//     }

//     while(1)
//     {
//         readCnt=fread((void*)buf, 1, sizeof(buf), src);

//         if(readCnt<sizeof(buf))
//         {
//             if(feof(src)!=0)
//             {
//                 fwrite((void*)buf, 1, readCnt, des);
//                 puts("File copied!");
//                 break;
//             }
//             else
//                 puts("File uncopied!");
//             break;
//         }
//         fwrite((void*)buf, 1, sizeof(buf), des);
//     }
//     fclose(src);
//     fclose(des);
//     return 0;
// }

// 문제 1-1
// int main(void)
// {
//     FILE * fp=fopen("mystory.txt", "wt");
//     if(fp==NULL)
//     {
//         puts("File open fail!");
//         return -1;
//     }

//     fputs("#이름: 김건우\n", fp);
//     fputs("#주민번호: 900208-1011258\n", fp);
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
int main(void)
{
    char str[50];
    FILE * fp=fopen("mystory.txt", "rt");

    while(fgets(str, sizeof(str), fp)!=NULL)
        printf("%s", str);

    fclose(fp);
    return 0;
}