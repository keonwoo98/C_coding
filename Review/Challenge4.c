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
typedef struct
{
    char author[20];
    char title[20];
    int page;
} Book;

int main(void)
{
    Book *arr[3];
    puts("도서 정보 입력");
    for(int i = 0; i < 3; i++)
    {
        arr[i] = (Book*)malloc(sizeof(Book));
        printf("저자 : ");
        fgets(arr[i]->author, sizeof(arr[i]->author), stdin);
        printf("제목 : ");
        fgets(arr[i]->title, sizeof(arr[i]->title), stdin);
        printf("페이지 수 : ");
        scanf("%d", &arr[i]->page);
        getchar();
    }

    puts("\n도서 정보 출력");
    for(int i = 0; i < 3; i++)
    {
        printf("book %d\n", i + 1);
        printf("저자 : %s", arr[i]->author);
        printf("제목 : %s", arr[i]->title);
        printf("페이지 수 : %d\n", arr[i]->page);
    }

    for(int i = 0; i < 3; i++)
        free(arr[i]);

    return 0;

}