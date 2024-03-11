#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
 {
    int a,b,sum;
    srand(time(0));
    a= rand() % 10000;
    b= rand() % 10000;
    sum=a+b;
    printf("The sum of 2 numbers is: %d ",sum);
    return 0;
}
