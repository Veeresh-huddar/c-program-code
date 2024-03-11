#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
 {
    int a,b,diff;
    srand(time(0));
    a= rand() % 10000;
    b= rand() % 10000;
    diff=a-b;
    printf("The difference of 2 numbers is: %d ",diff);
    return 0;
}
