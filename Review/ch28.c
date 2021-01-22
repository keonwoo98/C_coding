#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 도전 1
// typedef struct
// {
//     char author[20];
//     char title[20];
//     int page;
// } Book;

// int main(void)
// {
//     Book arr[3];
//     printf("도서 정보 입력\n");
//     for(int i=0; i<3; i++)
//     {
//         printf("저자: ");
//         fgets(arr[i].author, sizeof(arr[i].author), stdin);
//         printf("제목: ");
//         fgets(arr[i].title, sizeof(arr[i].title), stdin);
//         printf("페이지 수: ");
//         scanf("%d", &arr[i].page);
//         getchar();
//     }

//     printf("\n도서 정보 출력\n");
//     for(int i=0; i<3; i++)
//     {
//         printf("book %d\n", i+1);
//         printf("저자: %s", arr[i].author);
//         printf("제목: %s", arr[i].title);
//         printf("페이지 수: %d\n", arr[i].page);
//     }

//     return 0;
// }

// 도전 2
// typedef struct
// {
//     char author[20];
//     char title[20];
//     int page;
// } Book;

// int main(void)
// {
//     Book *arr[3];
//     printf("도서 정보 입력\n");
//     for(int i=0; i<3; i++)
//     {
//         arr[i]=(Book*)malloc(sizeof(Book));
//         printf("저자: ");
//         fgets(arr[i]->author, sizeof(arr[i]->author), stdin);
//         printf("제목: ");
//         fgets(arr[i]->title, sizeof(arr[i]->title), stdin);
//         printf("페이지 수: ");
//         scanf("%d", &arr[i]->page);
//         getchar();
//     }

//     printf("\n도서 정보 출력\n");
//     for(int i=0; i<3; i++)
//     {
//         printf("book %d\n", i+1);
//         printf("저자: %s", arr[i]->author);
//         printf("제목: %s", arr[i]->title);
//         printf("페이지 수: %d\n", arr[i]->page);
//     }

//     for(int i=0; i<3; i++)   
//     {
//         free(arr[i]);
//     }
//     return 0;
// }

// 도전 3
// typedef struct
// {
//     double real;
//     double fake;
// } CompNum;

// CompNum Sumof(CompNum n1, CompNum n2)
// {
//     CompNum sum;
//     sum.real = n1.real+n2.real;
//     sum.fake = n1.fake+n2.fake;
//     return sum;
// }

// CompNum Mulof(CompNum n1, CompNum n2)
// {
//     CompNum mul;
//     mul.real = (n1.real*n2.real)-(n1.fake*n2.fake);
//     mul.fake = (n1.real*n2.fake)+(n1.fake*n2.real);
//     return mul;
// }

// int main(void)
// {
//     CompNum n1, n2;
//     printf("복소수 입력1[실수 허수]: ");
//     scanf("%lf %lf", &n1.real, &n1.fake);
//     printf("복소수 입력2[실수 허수]: ");
//     scanf("%lf %lf", &n2.real, &n2.fake);
//     printf("합의 결과] 실수: %f 허수: %f\n", Sumof(n1, n2).real, Sumof(n1, n2).fake);
//     printf("곱의 결과] 실수: %f 허수: %f\n", Mulof(n1, n2).real, Mulof(n1, n2).fake);
//     return 0;
// }

// 도전 4
// int main(void)
// {
//     int a_count=0, p_count=0, ch=0;
//     char word[15];
//     FILE * fp=fopen("text.txt", "rt");

//     if(fp==NULL)
//     {
//         puts("File open fail!");
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
    
//     printf("word starts with 'a': %d\n", a_count);
//     printf("word starts with 'p': %d\n", p_count);
//     fclose(fp);
//     return 0;
// }

// 도전 5
int main(void)
{
    char ch, dh;
    FILE * fp1=fopen("text.txt", "rt");
    FILE * fp2=fopen("text1.txt", "rt");

    if(fp1==NULL || fp2==NULL)
    {
        puts("FIle open error");
        return -1;
    }

    while(1)
    {
        ch=fgetc(fp1);
        dh=fgetc(fp2);

        if(ch!=dh)
        {
            puts("Different files");
            break;
        }
        else if(feof(fp1)!=0 && feof(fp2)!=0)
        {
            puts("Same files");
            break;
        }
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}