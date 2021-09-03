#include <stdio.h>
#include <stdlib.h>

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

unsigned long long int fiboHelper(unsigned int a, unsigned long long int* arr) {
    if (a < 2) {
        return a;
    } 
    
    if (arr[a] != 0) {
        return arr[a];
    } else {
        arr[a] = fiboHelper(a - 1, arr) + fiboHelper(a - 2, arr);
        return arr[a];
    }
}

unsigned long long int fibo_rec(unsigned int a) {
    if (a == 0 || a == 1) {
        return a;
    } 

    unsigned long long int* arr = (unsigned long long int*)malloc(sizeof(unsigned long long int) * (a + 1));

    for (int i = 0; i <= a; i++) {
        arr[i] = 0;
    }

    arr[1] = 1;

    unsigned long long int ans = fiboHelper(a, arr);

    free(arr);

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

    printf("Fibo of %u is %llu\n", 3, fibo(3));
    printf("Fact of %u is %llu\n", 5, fact(5));

    for (unsigned int i = 0; i < 5; i++) {
        printf("Fibo(with recursion) of %u is %llu\n", i, fibo_rec(i));
        printf("Fibo(without recursion) of %u is %llu\n", i, fibo(i));
    }
    printf("Fibo of %u is %llu", 3, fibo(3));
    printf("Fact of %u is %llu", 5, fact(5));

    return 0;
}