#include <stdio.h>
#include <string.h>

typedef struct point
{
    char xpos[10];
    char ypos[20];
} Point;
int main(void)
{
    Point pos1;
    Point * pptr=&pos1;

    strcpy((*pptr).xpos, "Keonwoo");
    strcpy(pptr->ypos, "010-xxxx-xxxx");

    printf("%s, %s\n", pptr->xpos, (*pptr).ypos);
    return 0;
}