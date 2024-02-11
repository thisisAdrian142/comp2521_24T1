#include <stdio.h>

int factorial(int n) {
    if (n==0) {
        return 1;
    } else {
        return n*factorial(n -1);
    }
}

int main() {
    int num_input;
    printf("Input the n you want: \n");
    scanf("%d", &num_input);
    printf("The result of this factorial is: %d \n", factorial (num_input));
    return 0;
}