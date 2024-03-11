#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int l,b,p;
    srand(time(0));
    l=(rand() % 10) + 1;
    b=(rand() % 10) + 1;
    p=(2*l)+(2*b);
    printf("perimeter of the rectangle of length and breath of %d and %d: %d",l,b,p);
}