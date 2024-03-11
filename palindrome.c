#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() {
    int n, number, reverse = 0, original;
    srand(time(0));
    number=(rand() % 30000);
    original = number;
    while (number != 0) {
        reverse = reverse * 10 + number % 10;
        number /= 10;
    }
    if (original == reverse)
    {
        printf("%d is a palindrome.\n", original);
    }
    else
    {
        printf("%d is not a palindrome.\n", original);
    }
    return 0;
}
