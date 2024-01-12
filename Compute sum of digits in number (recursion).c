/*
Please write a C-program that uses a recursive function called "sumOfDigits()" to compute the sum of the digits of a number. To do so, your main function should first read an integer number as input and then call sumOfDigits(), which should in turn call itself until there are no digits left to sum, at which point the final sum should display to the user.

Here is the main idea of how the recursion in sumOfDigits() should work:
sumOfDigits(6452) = 2 + sumOfDigits(645)
sumOfDigits(645) = 5 + sumOfDigits(64)
...
sumOfDigits(6) = 6

Examples
Input
47253
Output
21

Input
643
Output
13

Warning: You will be graded on your output, so do not include any print statements that prompt a user for input.
*/

#include <stdio.h>

int sumOfDigits (int);

int main()
{
    int num, result;
    scanf("%d", &num);
    result = sumOfDigits(num);
    printf("%d", result);
    return 0;
}

int sumOfDigits (int a) {
    //doing a constant out of that just for a good habit;
    const int ten = 10;
    int b=0; //temp value

    if (a<ten) { //if that's the end on a number
        return a;
    } else {
    //save the result of % in a temp value(b) to add that to the next recursion step
        b=b+(a%ten);
        a=a/ten;
    }

    return (b + (sumOfDigits(a)));
}
