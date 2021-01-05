#include <stdio.h>

// 문제 1-1
// int main(void)
// {
//     int arr[]={1,2,3,4,5};
//     int *ptr = arr;
//     int i;

//     for(i=0; i<5; i++)
//     {
//         ptr[i]+=2;
//     }
//     printf("%d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4]);
//     return 0;
// }

// 문제 1-2
// int main(void)
// {
//     int arr[]={1,2,3,4,5};
//     int *ptr = arr;
//     int i;

//     for(i=0; i<5; i++)
//     {
//         *(ptr+i)+=2;
//     }
//     printf("%d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4]);
//     return 0;
// }

// 문제 1-3
// int main(void)
// {
//     int arr[]={1,2,3,4,5};
//     int *ptr = arr+4;
//     int i, sum=0;

//     for(i=0; i<5; i++)
//     {
//         sum += *ptr;
//         ptr--;
//     }
//     printf("%d", sum);
//     return 0;
// }

// 문제 1-4
// int main(void)
// {
//     int arr[]={1,2,3,4,5,6};
//     int *ptr=arr;
//     int *rtp=&arr[5];
//     int i, temp;

//     for(i=0; i<3; i++)
//     {
//         temp=*ptr;
//         *ptr=*rtp;
//         *rtp=temp;
//         ptr += 1;
//         rtp -= 1;
//     }

//     printf("%d %d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
//     return 0;
// }

// 문제 1-4
int main(void)
{
    int arr[]={1,2,3,4,5,6};
    int *ptr=arr;
    int i;

    for(i=5; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}