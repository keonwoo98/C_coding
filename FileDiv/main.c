#include <stdio.h>
#include "areaArith.h"
#include "roundArith.h"

int main(void)
{
    printf("TriangleArea: %g\n", TriangleArea(4, 2));
    printf("CircleArea: %g\n", CircleArea(3));
    printf("RectangleRound: %g\n", RectangleRound(2.5, 5.2));
    printf("SquareRound: %g\n", SquareRound(3));
    return 0;
}