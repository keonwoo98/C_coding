#include <stdio.h>

// 문제 1
// void Odd(int arr[10])
// {
//     int i;
//     printf("Odd Numbers: ");
//     for(i=0; i<10; i++)
//     {
//         if(arr[i]%2==1)
//             printf("%d ", arr[i]);
//     }
// }
// void Even(int arr[10])
// {
//     int i;
//     printf("\nEven Numbers: ");
//     for(i=0; i<10; i++)
//     {
//         if(arr[i]%2==0)
//             printf("%d ", arr[i]);
//     }
// }
// int main(void)
// {
//     int arr[10];
//     int i;
//     for(i=0; i<10; i++)
//     {
//         printf("Number(%d번쨰): ", i+1);
//         scanf("%d", &arr[i]);
//     }
//     Odd(arr);
//     Even(arr);
//     return 0;
// }

// 문제 2
// int main(void)
// {
//     int num;
//     int i, k, n=0, j=2;
//     int arr[5]; // 여기가 문제
//     int len=0;
//     int temp;
//     printf("deci number: ");
//     scanf("%d", &num);

//     for(k=0; j<=num; k++)
//     {
//         j=2*j;
//     }
//     for(i=0; i<=k; i++)
//     {
//         arr[i] = num%2;
//         num = num/2;
//     }

//     len = sizeof(arr)/sizeof(int);

//     for(i=len; i>=0; i--)
//     {
//         printf("%d", arr[i]);
//     }

//     return 0;
// } // 왜 안되는거??

// void bin(int t)
// {
//     if(t != 0)
//     {
//         bin(t/2);
//         printf("%d", t%2);
//     }
//     return;
// }
// int main(void)
// {
//     int num;
//     printf("deci number: ");
//     scanf("%d", &num);
//     bin(num);
//     return 0;
// }

// 문제 3
// int main(void)
// {
//     int arr[10];
//     int Odd[10];
//     int Even[10];
//     int i, j=0, k=0;

//     for(i=0; i<10; i++)
//     {
//         printf("insert(%d번쨰): ", i+1);
//         scanf("%d", &arr[i]);
//     }
//     for(i=0; i<10; i++)
//     {
//         if(arr[i%2]==1)
//             Odd[j]=arr[i];
//             j++;
//         if(arr[i%2]==0)
//             Even[k]=arr[i];
//             k++;
//     }
//     for(i=0; i < sizeof(Odd)/sizeof(int); i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     for(i=sizeof(Even)/sizeof(int); i>=0; i--)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// } // 뭐가 문제일까??

// int main(void)
// {
//     int arr[10];
//     int temp, odd=0, even=9;

//     for(int i=0; i<10; i++)
//     {
//         printf("insert: ");
//         scanf("%d", &temp);

//         if(temp%2!=0)
//             arr[odd++]=temp;
//         else
//             arr[even--]=temp;
//     }
//     for(int i=0; i<10; i++)
//         printf("%d ", arr[i]);
//     return 0;
// }

// 문제 4
// void Pal(char arr[50])
// {
//     int len=0;
//     int cnt;
//     while(arr[len]!=0)
//         len++;
//     for(int i=0; i<len/2; i++)
//     {
        
//         if(arr[i]==arr[(len-i)-1])
//             continue;
//         else
//             cnt += 1;
//     }
//     if(cnt == 0)
//         printf("Palindrome");
//     else
//         printf("Not Palindrome");
// }
// int main(void)
// {
//     char arr[50];
//     printf("insert: ");
//     scanf("%s", arr);
//     Pal(arr);
//     return 0;
// }

// 문제 5
void Bubble(int arr[], int len)
{
    int i, j;
    int temp;
    for(i=0; i<len-1; i++)
    {
        for(j=0; j<(len-i)-1; j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(void)
{
    int arr[7];
    int i;
    for(i=0; i<7; i++)
    {
        printf("insert: ");
        scanf("%d", &arr[i]);
    }
    Bubble(arr, sizeof(arr)/sizeof(int));
    for(i=0; i<7; i++)
        printf("%d ", arr[i]);
    return 0;
}