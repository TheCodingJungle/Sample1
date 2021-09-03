#include <stdio.h>

unsigned long long int fibo(int a) {
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

int main() {
    printf("Hello World!\n");
    printf("Hello world again\n");

    printf("Fibo of %d is %llu", 3, fibo(3));

    return 0;
}