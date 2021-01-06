#include <stdio.h>

// 문제 1-1
// int MaxNum(int n1, int n2, int n3)
// {
//     if (n1>n2)
//         return(n1>n3) ? n1 : n3;
//     else
//         return(n2>n3) ? n2 : n3;
// }
// int MinNum(int n1, int n2, int n3)
// {
//     if (n1<n2)
//         return(n1<n3) ? n1 : n3;
//     else
//         return(n2<n3) ? n2 : n3;
// }
// int main(void)
// {
//     int n1, n2, n3;
//     printf("insert 3 numbers: ");
//     scanf("%d %d %d", &n1, &n2, &n3);
//     printf("MaxNum: %d, MinNum: %d", MaxNum(n1, n2, n3), MinNum(n1, n2, n3));
//     return 0;
// }

// 문제 1-2
// double CelToFah(double c)
// {
//     return 1.8*c+32;
// }
// double FahToCel(double f)
// {
//     return (f-32)/1.8;
// }
// int main(void)
// {
//     int num;
//     double tem;
//     printf("choose(Fah: 1 or Cel: 2): ");
//     scanf("%d", &num);
//     if (num==1)
//     {
//         printf("Fah: ");
//         scanf("%lf", &tem);
//         printf("FahToCel: %f", FahToCel(tem));
//     }
//     else if (num==2)
//     {
//         printf("Cel: ");
//         scanf("%lf", &tem);
//         printf("CelToFah: %f", CelToFah(tem));
//     }
//     else
//     {
//         printf("choose in 1 or 2");
//     }
//     return 0;
// }

// 문제 1-3
int Fibo(int num)
{
    int f1=0, f2=1, f3, i;
    if(num==1)
        printf("%d ",f1);
    else
        printf("%d %d ", f1, f2);

    for (i = 0; i < num-2; i++)
    {
        f3=f1+f2;
        printf("%d ", f3);
        f1=f2;
        f2=f3;
    }
    return 0;
}

int main(void)
{
    int n;
    printf("how many: ");
    scanf("%d", &n);
    if(n<1)
    {
        printf("1 or upper\n");
        return -1;
    }
    Fibo(n);
    return 0;
}