#include <stdio.h>

unsigned long long int fibo(unsigned int a) {
    if (a == 0) {
        return 0;
    } else if (a == 1) {
        return 1;
    }

    unsigned long long int l = 0, r = 1, ans;

    for (int i = 2; i <= a; i++) {
        ans = l + r;
        l = r;
        r = ans;
    }

    return ans;
}
/**
 * @brief Takes out factorial of a number
 *  n! = n * (n - 1) * (n - 2) * ... * 1
 * n! = n * (n - 1)!
 * (n - 1)! = (n - 1) * (n - 2) * ... * 1
 * 0! = 1
 */
unsigned long long int fact(unsigned int a) {
    if (a < 2) {
        return 1;
    } 

    return fact(a - 1) * a;
}

int main() {
    printf("Hello World!\n");
    printf("Hello world again\n");

    printf("Fibo of %u is %llu", 3, fibo(3));
    printf("Fact of %u is %llu", 5, fact(5));

    return 0;
}