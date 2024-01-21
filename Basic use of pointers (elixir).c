/*You are developing an elixir that supposedly makes a person younger. You just need to get the software working correctly before starting to market your product. Your program keeps track of a person's age, but in order to be more secretive you work with a pointer rather than the variable that stores the age directly. 

You are provided with a main function -- please complete it. Do not change any of the lines of code that have already been completed. Please only change the lines that are currently comments. */

#include <stdio.h>
int main(void) {

    int age;

    // add a line here that declares an integer pointer named "ageptr"
    int * ageptr;

    scanf("%d", &age);

    // add a line here that stores the address of age in ageptr 
    ageptr = &age;

    printf("The secret address is... ");

    // add a line here that prints out the address stored in ageptr  
    printf("%p\n", ageptr);

    printf("Now take three drops of the magic elixir. \n");

    // add a line that uses only ageptr to lower the age by 5 years
    age = * ageptr - 5;

    printf("Did the elixir work? You are %d years old!", age);

    return 0;

}

/*
    Part 2
You are continuing to work on your elixir of youth, and it turns out that, before purchasing the elixir, customers would like to know how young they will become after drinking the elixir!

The way your elixir works is that anyone who is at least 21 years old becomes ten years younger. However, the elixir does not work on anyone twenty years old or younger - when these people try the elixir, they actually double in age!

You have already created a main function, shown below. All you need to do now is write a function which accepts the integer pointer "ageAddr" as an argument and modifies the integer this pointer points to according to the rules of your elixir. Since you are using pointers to change the value of the variable age, your function should have a void return type. 
Be sure not to modify the code that has been given to you, other than to add the following:
    Your function definition.
    The appropriate function call where indicated in the main function.
    Your function prototype where indicated in the provided code.

Example
Input:
55
Output:
Your current age is 55.
Your new age will be 45!

Input:
19
Output:
Your current age is 19.
Your new age will be 38!
*/



#include <stdio.h>

void compute (int *);

int main(void){
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	compute (&age);

	printf("Your new age will be %d!\n", age);
	return 0;
}

void compute (int * ageAddr) {
    
    if (* ageAddr < 21) {
        * ageAddr *= 2;
    }
    else if (* ageAddr >= 21) {
        * ageAddr -= 10;
    }
    else printf("Error...");
}
