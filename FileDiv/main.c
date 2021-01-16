#include <stdio.h>
#include "include/areaArith.h"
#include "include/roundArith.h"

int main(void)
{
    printf("TriangleArea: %g\n", TriangleArea(4, 2));
    printf("CircleArea: %g\n", CircleArea(3));
    printf("RectangleRound: %g\n", RectangleRound(2.5, 5.2));
    printf("SquareRound: %g\n", SquareRound(3));
    return 0;
}