#include <stdio.h>
#include <time.h>

int main() 
{
	int n;
	srand(time(0));
	int n = rand() -RAND_MAX / 2;
    if (n > 0) {
        printf("is positive\n" , n);
    } else if (n == 0) {
        printf("is zero\n" , n);
    } else {
        printf("is negative\n" , n);
    }
    return (0);
}
