#include <stdio.h>

int factorial (int);

int main()
{
    int num, fac;
    printf("Enter a positive integer in order to get it's factorial:\n");
    scanf("%d", &num);
    
    if (num<0) {
        printf("%d is negative, exiting the program...\n", num);
    } else {
        fac = factorial(num);
        if (fac>0) {
            printf("%d! = %d\n", num, fac);
        } else {
            printf("Error: stack overflow. Reached the limit of representable integers. Exiting.\n");
        }
    }
    return 0;
}

int factorial (int num) {
    int answer;
    if (num==0) {
        answer=1;
    } else {
        answer = num * factorial(num-1);
    }
    return answer;
}
