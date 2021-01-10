#include <stdio.h>

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