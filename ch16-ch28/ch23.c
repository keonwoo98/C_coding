#include <stdio.h>

// StructMemArrCopy
// typedef struct
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// } Person;

// void ShowPersonInfo(Person man)
// {
//     printf("name: %s\n", man.name);
//     printf("phone: %s\n", man.phoneNum);
//     printf("age: %d\n", man.age);
// }

// Person ReadPersonInfo(void)
// {
//     Person man;
//     printf("name? "); scanf("%s", man.name);
//     printf("phone? "); scanf("%s", man.phoneNum);
//     printf("age? "); scanf("%d", &man.age);
//     return man;
// }

// int main(void)
// {
//     Person man=ReadPersonInfo();
//     ShowPersonInfo(man);
//     return 0;
// }

// StructFunctionCallByRef
// typedef struct point
// {
//     int xpos;
//     int ypos;
// } Point;

// void OrgSymTrans(Point * ptr)
// {
//     ptr->xpos = (ptr->xpos) * -1;
//     ptr->ypos = (ptr->ypos) * -1;
// }

// void ShowPosition(Point pos)
// {
//     printf("[%d, %d]\n", pos.xpos, pos.ypos);
// }

// int main(void)
// {
//     Point pos={7, -5};
//     OrgSymTrans(&pos);
//     ShowPosition(pos);
//     OrgSymTrans(&pos);
//     ShowPosition(pos);
//     return 0;
// }

// StructOperation
// typedef struct point
// {
//     int xpos;
//     int ypos;
// } Point;

// int main(void)
// {
//     Point pos1={1, 2};
//     Point pos2;
//     pos2=pos1;

//     printf("size: %d\n", sizeof(pos1));
//     printf("[%d, %d]\n", pos1.xpos, pos1.ypos);
//     printf("size: %d\n", sizeof(pos2));
//     printf("[%d, %d]\n", pos2.xpos, pos2.ypos);
//     return 0;
// }

// 문제 1
// typedef struct
// {
//     int xpos;
//     int ypos;
// } Point;

// void SwapPoint(Point *ptr1, Point *ptr2)
// {
//     Point temp;
//     temp=*ptr1;
//     *ptr1=*ptr2;
//     *ptr2=temp;
// }

// int main(void)
// {
//     Point pos1={2, 4};
//     Point pos2={5, 7};
//     Point *ptr1=&pos1;
//     Point *ptr2=&pos2;
//     SwapPoint(ptr1, ptr2);
//     printf("pos1: [%d, %d]\n", pos1.xpos, pos1.ypos);
//     printf("pos2: [%d, %d]\n", pos2.xpos, pos2.ypos);
//     return 0;
// }

// 문제 2
typedef struct
{
    int xpos;
    int ypos;
} Point;

typedef struct
{
    Point ul;
    Point lr;
} Rectangle;

void ShowRecArea(Rectangle rec)
{
    printf("넓이 : %d\n", (rec.lr.xpos-rec.ul.xpos) * (rec.lr.ypos-rec.ul.ypos));
}

void ShowRecPos(Rectangle rec)
{
    printf("좌 상단: [%d, %d]\n", rec.ul.xpos, rec.ul.ypos);
    printf("좌 하단: [%d, %d]\n", rec.ul.xpos, rec.lr.ypos);
    printf("우 상단: [%d, %d]\n", rec.lr.xpos, rec.ul.ypos);
    printf("우 상단: [%d, %d]\n", rec.lr.xpos, rec.lr.ypos);
}

int main(void)
{
    Rectangle rec1={{1, 1}, {4, 4}};
    Rectangle rec2={{0, 0}, {7, 5}};
    ShowRecArea(rec1);
    ShowRecPos(rec1);
    ShowRecArea(rec2);
    ShowRecPos(rec2);
    return 0;
}