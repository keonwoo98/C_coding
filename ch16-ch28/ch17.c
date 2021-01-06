#include <stdio.h>

// 문제 1-1
void MaxAndMin(int *arr, int size, int **maxPtr, int **minPtr)
{
    int i;
    int *max, *min;
    max=min=&arr[0];
    for(i=0; i<size; i++)
    {
        if(*max<arr[i])
            max=&arr[i];
        if(*min>arr[i])
            min=&arr[i];
    }
    *maxPtr=max;
    *minPtr=min;
}
int main(void)
{
    int arr[5];
    int *maxPtr;
    int *minPtr;
    int i;
    for(i=0; i<5; i++)
    {
        printf("num: ");
        scanf("%d", &arr[i]);
    }
    MaxAndMin(arr, sizeof(arr)/sizeof(int), &maxPtr, &minPtr);
    printf("max: %d\nmin: %d", *maxPtr, *minPtr);
    return 0;
}