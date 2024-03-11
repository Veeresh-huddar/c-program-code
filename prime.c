#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; ++i) 
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int num,flag=0;
    srand(time(0));
    num=rand() % 2000;
    if (num <= 1)
    {
        flag=1;
    }
    for (int i = 2; i= num/2; ++i) 
    {
        if (num % i == 0)
            flag=1;
    }
    if (flag==0)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);
    return 0;
}
