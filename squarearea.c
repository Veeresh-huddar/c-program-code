#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int side,area;
    srand(time(0));
    side=(rand() % 10) + 1;
    area=side*side;
    printf("Area of the square of side %d: %d",side,area);
}