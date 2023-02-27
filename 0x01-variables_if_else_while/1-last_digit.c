#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    srand(time(NULL));
    n = rand() - RAND_MAX / 2;
    printf("Last digit of %d is %d", n, n % 10);
    return 0;
}

*/

/*
