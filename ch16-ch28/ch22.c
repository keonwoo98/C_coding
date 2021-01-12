#include <stdio.h>
#include <math.h>

//TwoPointDistace
// struct point
// {
//     int xpos;
//     int ypos;
// };
// int main(void)
// {
//     struct point pos1, pos2;
//     double distance;

//     fputs("point1 pos: ", stdout);
//     scanf("%d %d", &pos1.xpos, &pos1.ypos);
//     fputs("point2 pos: ", stdout);
//     scanf("%d %d", &pos2.xpos, &pos2.ypos);

//     distance=sqrt((double)((pos1.xpos-pos2.xpos)*(pos1.xpos-pos2.xpos)+(pos1.ypos-pos2.ypos)*(pos1.ypos-pos2.ypos)));
//     printf("distance: %g\n", distance);
//     return 0;
// }

// 문제 1
// struct employee
// {
//     char name[10];
//     char id[20];
//     int pay;
// };
// int main(void)
// {
//     struct employee person;
//     fputs("name: ", stdout);
//     scanf("%s", person.name);
//     fputs("id: ", stdout);
//     scanf("%s", person.id);
//     fputs("pay: ", stdout);
//     scanf("%d", &person.pay);

//     printf("name: %s\n", person.name);
//     printf("id: %s\n", person.id);
//     printf("pay: %d\n", person.pay);
//     return 0;
// }

//InitStructVal
// struct point
// {
//     int xpos;
//     int ypos;
// };
// struct person
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// };
// int main(void)
// {
//     struct point pos={10, 20};
//     struct person man={"Keonwoo", "010-1111-2222", 24};
//     printf("%d %d\n", pos.xpos, pos.ypos);
//     printf("%s %s %d\n", man.name, man.phoneNum, man.age);
//     return 0;
// }

// 문제 2
// struct employee
// {
//     char name[10];
//     char id[20];
//     int pay;
// };
// int main(void)
// {
//     int i;
//     struct employee arr[3];
//     for(i=0; i<3; i++)
//     {
//         printf("name, id, pay : ");
//         scanf("%s %s %d", arr[i].name, arr[i].id, &arr[i].pay);
//     }
//     printf("\n");

//     for(i=0; i<3; i++)
//     {
//         printf("name: %s\nid: %s\npay: %d\n", arr[i].name, arr[i].id, arr[i].pay);
//     }
//     return 0;
// }

// StructPointer
// struct point
// {
//     int xpos;
//     int ypos;
// };
// int main(void)
// {
//     struct point pos1={1, 2};
//     struct point pos2={100, 200};
//     struct point *pptr=&pos1;

//     (*pptr).xpos += 4;
//     (*pptr).ypos += 5;
//     printf("[%d %d]\n", pptr->xpos, pptr->ypos);

//     pptr=&pos2;
//     pptr->xpos += 1;
//     pptr->ypos += 2;
//     printf("[%d %d]\n", (*pptr).xpos, (*pptr).ypos);
//     return 0;
// }

// StructPointerMem
struct point
{
    int xpos;
    int ypos;
};
struct circle
{
    double radius;
    struct point *center;
};
int main(void)
{
    struct point cen={2, 7};
    double rad=5.5;

    struct circle ring={rad, &cen};
    printf("원의 반지름: %g\n", ring.radius);
    printf("원의 중심 [%d %d]\n", (ring.center)->xpos, (ring.center)->ypos);
    return 0;
}