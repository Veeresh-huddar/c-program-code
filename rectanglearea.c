#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int l,b,a;
    srand(time(0));
    l=(rand() % 10) + 1;
    b=(rand() % 10) + 1;
    a=l*b;
    printf("Area of the rectangle of length %d and breadth %d: %d",l,b,a);
}