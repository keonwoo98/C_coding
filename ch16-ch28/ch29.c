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
//         printf("book%d\n", i+1);
//         printf("저자: %s", arr[i].author);
//         printf("제목: %s", arr[i].title);
//         printf("페이지 수: %d\n", arr[i].page);
//         printf("\n");
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
//     Book *books[3];
//     printf("도서 정보 입력\n");
//     for(int i=0; i<3; i++)
//     {
//         books[i]=(Book*)malloc(sizeof(Book));
//         printf("저자: ");
//         fgets(books[i]->author, sizeof(books[i]->author), stdin);
//         printf("제목: ");
//         fgets(books[i]->title, sizeof(books[i]->title), stdin);
//         printf("페이지 수: ");
//         scanf("%d", &books[i]->page);
//         getchar();
//     }
//     printf("\n도서 정보 출력\n");
//     for(int i=0; i<3; i++)
//     {
//         printf("book%d\n", i+1);
//         printf("저자: %s", books[i]->author);
//         printf("제목: %s", books[i]->title);
//         printf("페이지 수: %d\n", books[i]->page);
//         printf("\n");
//     }
//     for(int i=0; i<3; i++)
//     {
//         free(books[i]);
//     }

//     return 0;
// }

// 문제 3
// typedef struct
// {
//     double real;
//     double imagin;
// } Complex;

// Complex Sum(Complex num1, Complex num2)
// {
//     Complex sum;
//     sum.real = num1.real + num2.real;
//     sum.imagin = num1.imagin + num2.imagin;
//     return sum;
// }

// Complex Mul(Complex num1, Complex num2)
// {
//     Complex mul;
//     mul.real = (num1.real*num2.real)-(num1.imagin*num2.imagin);
//     mul.imagin = (num1.real*num2.imagin)+(num1.imagin*num2.real);
//     return mul;
// }

// int main(void)
// {
//     Complex num1, num2;
//     printf("복소수 입력1[실수 허수]: ");
//     scanf("%lf %lf", &num1.real, &num1.imagin);
//     printf("복소수 입력2[실수 허수]: ");
//     scanf("%lf %lf", &num2.real, &num2.imagin);

//     printf("합의 결과] 실수: %f, 허수: %f\n", Sum(num1, num2).real, Sum(num1, num2).imagin);
//     printf("곱의 결과] 실수: %f, 허수: %f\n", Mul(num1, num2).real, Mul(num1, num2).imagin);
//     return 0;
// }

// text.txt 만들기
// int main(void)
// {
//     FILE * text=fopen("text1.txt", "wt");
//     fputs("apple\n", text);
//     fputs("purple\n", text);
//     fputs("admire\n", text);
//     fputs("community\n", text);
//     fputs("perspective\n", text);
//     fputs("administer", text);
//     fclose(text);
//     return 0;
// }

// 문제 4
// int main(void)
// {
//     int a_count=0, p_count=0, ch=0;
//     char word[50];

//     FILE * fp=fopen("text.txt", "rt");
//     if(fp==NULL)
//     {
//         puts("File open fail!\n");
//         return -1;
//     }

//     do
//     {
//         fscanf(fp, "%s", word);
//         if(word[0]=='A' || word[0]=='a')
//             a_count++;
//         else if(word[0]=='P' || word[0]=='p')
//             p_count++;
//     } while ((ch = fgetc(fp)) != EOF);

//     printf("word starts with 'a': %d words\n", a_count);
//     printf("word starts with 'p': %d words", p_count);
//     fclose(fp);
//     return 0;
// }

// text.txt 만들기
// int main(void)
// {
//     FILE * text=fopen("text.txt", "wt");
//     fputs("apple\n", text);
//     fputs("purple\n", text);
//     fputs("admire\n", text);
//     fputs("community\n", text);
//     fputs("perspective\n", text);
//     fputs("administer", text);
//     fclose(text);
//     return 0;
// }

// 문제 5
int main(void)
{
    char ch, dh;

    FILE * fp1=fopen("text.txt", "rt");
    FILE * fp2=fopen("text1.txt", "rt");

    if(fp1==NULL || fp2==NULL)
    {
        printf("File open error\n");
        return -1;
    }

    while(1)
    {
        ch=fgetc(fp1);
        dh=fgetc(fp2);

        if(ch!=dh)
        {
            printf("두 개의 파일은 일치하지 않습니다.\n");
            break;
        }
        else if(feof(fp1)!=0 && feof(fp2)!=0)
        {
            printf("두 개의 파일은 완전히 일치합니다.\n");
            break;
        }
    }

    fclose(fp1);
    fclose(fp2);
    return 0;
}
