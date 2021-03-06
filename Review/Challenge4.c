#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 문제 1
// typedef struct
// {
//     char author[20];
//     char title[20];
//     int page;
// } Book;

// int main(void)
// {
//     int i;
//     Book book[3];

//     puts("도서 정보 입력");
//     for(i = 0; i < 3; i++)
//     {
//         printf("저자 : ");
//         fgets(book[i].author, sizeof(book[i].author), stdin);
//         printf("제목 : ");
//         fgets(book[i].title, sizeof(book[i].title), stdin);
//         printf("페이지 수 : ");
//         scanf("%d", &book[i].page);
//         getchar();
//     }

//     puts("\n도서 정보 출력");
//     for(i = 0; i < 3; i++)
//     {
//         printf("book %d\n", i + 1);
//         printf("저자 : %s", book[i].author);
//         printf("제목 : %s", book[i].title);
//         printf("페이지 수 : %d\n", book[i].page);
//     }
//     return 0;
// }

// 문제 2
// typedef struct
// {
//     char author[20];
//     char title[20];
//     int page;
// } Book;

// int main(void)
// {
//     Book *arr[3];
//     puts("도서 정보 입력");
//     for(int i = 0; i < 3; i++)
//     {
//         arr[i] = (Book*)malloc(sizeof(Book));
//         printf("저자 : ");
//         fgets(arr[i]->author, sizeof(arr[i]->author), stdin);
//         printf("제목 : ");
//         fgets(arr[i]->title, sizeof(arr[i]->title), stdin);
//         printf("페이지 수 : ");
//         scanf("%d", &arr[i]->page);
//         getchar();
//     }

//     puts("\n도서 정보 출력");
//     for(int i = 0; i < 3; i++)
//     {
//         printf("book %d\n", i + 1);
//         printf("저자 : %s", arr[i]->author);
//         printf("제목 : %s", arr[i]->title);
//         printf("페이지 수 : %d\n", arr[i]->page);
//     }

//     for(int i = 0; i < 3; i++)
//         free(arr[i]);

//     return 0;

// }

// 문제 3
// typedef struct
// {
//     double real;
//     double fake;
// } Complex;

// Complex Sumof(Complex num[])
// {
//     Complex sum;
//     sum.real = num[0].real + num[1].real;
//     sum.fake = num[0].fake + num[1].fake;
//     return sum;
// }

// Complex Mulof(Complex num[])
// {
//     Complex mul;
//     mul.real = (num[0].real * num[1].real) - (num[0].fake * num[1].fake);
//     mul.fake = (num[0].real * num[1].fake) + (num[0].fake * num[1].real);
//     return mul;
// }

// int main(void)
// {
//     Complex num[2];
//     for(int i = 0; i < 2; i++)
//     {
//         printf("복소수 입력%d[실수 허수] : ", i + 1);
//         scanf("%lf %lf", &num[i].real, &num[i].fake);
//     }
//     printf("합의 결과] 실수 : %f 허수 : %f\n", Sumof(num).real, Sumof(num).fake);
//     printf("곱의 결과] 실수 : %f 허수 : %f\n", Mulof(num).real, Mulof(num).fake);
//     return 0;
// }

// 문제 4
// int main(void)
// {
//     int a_count = 0, p_count = 0, ch = 0;
//     char word[15];
//     FILE * fp = fopen("text.txt", "rt");

//     if(fp == NULL)
//     {
//         puts("File open fail");
//         return -1;
//     }

//     do
//     {
//         fscanf(fp, "%s", word);
//         if(word[0] == 'A' || word[0] == 'a')
//             a_count++;
//         else if(word[0] == 'P' || word[0] == 'p')
//             p_count++;
//     } while (fgetc(fp) != EOF);
//     printf("word starts with 'a' : %d\n", a_count);
//     printf("word starts with 'p' : %d\n", p_count);
//     fclose(fp);
//     return 0;
// }

// 문제 5
// int main(void)
// {
//     char ch, dh;
//     FILE * fp1 = fopen("text.txt", "rt");
//     FILE * fp2 = fopen("text1.txt", "rt");

//     if(fp1 == NULL || fp2 == NULL)
//     {
//         puts("File open error");
//         return -1;
//     }
//     while(1)
//     {
//         ch = fgetc(fp1);
//         dh = fgetc(fp2);

//         if(ch != dh)
//         {
//             puts("Different files");
//             break;
//         }
//         else if(feof(fp1) != 0 && feof(fp2) != 0)
//         {
//             puts("Same files");
//             break;
//         }
//     }
//     fclose(fp1);
//     fclose(fp2);
//     return 0;
// }