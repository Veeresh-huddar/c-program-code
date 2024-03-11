#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int num,a[20],i,j;
    srand(time(0));
    num= rand() % 9999;
    int sum=0;
        for(i=0;i<5;i++)
        {
        a[i]=(num%10);
        num=(num/10);
        }
    
        for(j=0;j<5;j++)
        {
            sum=sum+a[j];
        }
        printf("%d",sum);
    return 0;
    printf("Sum of digits of %d = %d\n", num, sum);
    return 0;
}
