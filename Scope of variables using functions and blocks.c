#include <stdio.h>

int testFunction(int);

int main(){
    int mainIntOne = 10;
    int mainIntTwo = testFunction(mainIntOne);
    printf("mainIntOne from main: %d\n", mainIntOne);
    printf("mainIntTwo from testFunction, passed back: %d\n", mainIntTwo);
    printf("testTwo from testFunction, I did not pass it back, but try to print it: %d\n", testTwo); //error
    return(0);
}

int testFunction(int testOne)
{
        testOne = testOne + 5; //update and return
        { //block
        int testThree = testOne + 45;
        printf("testThree from the block, took var outside the block, printed in the block: %d\n", testThree);
        }
        printf("testThree from the block, trying to print it outside of the block: %d\n", testThree); //error
        return testOne;
}
