// No 1

#define TRIPLE(x) (x) * 3

int num = 42;
printf("%d",TRIPLE(num));

// No 2

#ifdef TRIPLE
#define SQR(x) (x) * (x)
#else
#define TRIPLE(x) (x) * 3
#endif

// No 3

// Thepreprocessor acts: before compilation

// No 4

#include <stdio.h>
#define T 42
int main()
{
    int T = 8;
    printf("%d",T);
    return 0;
}

// No 5

#define sqr(x) x * x
int x = 16 / sqr(4);
printf("%d",x);