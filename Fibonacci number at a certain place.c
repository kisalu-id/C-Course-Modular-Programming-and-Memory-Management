#include <stdio.h>
int fibonacci(int);
int main(void)  {
    int num, answer; 
    
    printf("Which Fibonacci number do you want to know? Please input a positive integer.\n");
    scanf("%d", &num);
    answer = fibonacci(num);
    printf("The Fibonacci number at a place %d is %d.\n", num, answer);
    return 0;
}

int fibonacci(int a) {
    if (a==1) {
        return 0;
    }
    else if (a==2) {
        return 1;
    } else {
        return (fibonacci(a-1)+fibonacci(a-2));
    }
}
