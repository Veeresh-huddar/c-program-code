#include <stdio.h>

int main() {
    int n, rev = 0, org;
    printf("Enter an integer: ");
    scanf("%d", &n);
    org = n;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if (org == rev)
        printf("%d is a palindrome.\n", org);
    else
        printf("%d is not a palindrome.\n", org);
    return 0;
}
