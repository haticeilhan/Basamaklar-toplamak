#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myNumber, bolum, kalan, sum;
    sum = 0;
    printf("Write a 4 digit number: ");
    scanf("%d",&myNumber);

    bolum = myNumber /1000;
    sum += bolum;
    kalan = myNumber% 1000;

    bolum = kalan / 100;
    sum += bolum;
    kalan = kalan % 100;

    bolum = kalan / 10;
    sum += bolum;
    kalan  = kalan % 10;
    sum += kalan;

    printf("Your sum is: %d\n", sum);

    return 0;
}
