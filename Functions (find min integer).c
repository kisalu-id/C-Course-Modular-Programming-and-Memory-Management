/* The goal of this problem is to find the smallest integer in a list of numbers.

To help you with this task, please write a function called min() that finds and returns the smallest amongst two integers. The function thus takes two integers as input and returns the smallest of the two.
Next, please use min() in your main function to work your way through an entire list of numbers in order to find its minimum. The first number you read gives the number of elements in the list of integers under consideration. You will then read the integer values, using min() to keep only the smallest integer read at each step. In the end, please print out the smallest integer in the list.
Example
Input
10
4 3 6 2 6 8 9 8 5 4

Output
2 
*/

#include <stdio.h>
int min(int, int);

int main() {
    int times, num, minNb;
    scanf("%d", &times);
    scanf("%d", &minNb);
    for (int i=1; i<times; i++) {
        scanf("%d", &num);
        minNb = min(minNb,num);
    }
    printf("%d is the smallest integer", minNb);
    return 0;
}

int min (int a, int b) {
    if (a<=b) {
        return a;
    }
    return b;
}
