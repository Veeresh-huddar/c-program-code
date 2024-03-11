#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int peri,side;
    srand(time(0));
    side=(rand() % 10) + 1;
    peri=side*4;
    printf("perimeter of the square of side %d: %d",side,peri);
}