#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int n,a[n];
    int i,lrg;
    srand(time(0));
    n=(rand() % 100)+1;
    printf("Number of elements in array are: %d\n",n);
    for(i=0;i<n;i++)
    {
        a[i]=rand() % 1000;
    }
    lrg=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>lrg)
        {
            lrg=a[i];
        }
    }
    printf("The largest number of the array is: %d",lrg);

}