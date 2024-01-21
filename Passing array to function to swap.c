/*
Within this program, we will pass an array with 6 integers to a function, have the function swap the first and last integer, the second and the second to last integer, the third and the third to last integer.
The function is called reverseArray and doesn't return anything (void). It should take one parameter, representing the array of integers. 
The main function first reads 6 integers from the input, and assigns them to the array. The main function then calls reverseArray, passing the array as an argument.
The main function then prints the reversed array.

Examples
Input:
1 2 3 4 5 6
Output:
6 5 4 3 2 1

Input: 
9 12 3 25 11 5
Output:
5 11 25 3 12 9
*/

#include <stdio.h>

#define six 6 //no magic numbers. this number shows the length of an array

void reverseArray (int *);

int main(void){
	int arr[six];
	int i;
	
	for (i=0; i<six; i++)
	    scanf("%d", &arr[i]);
	
	reverseArray (arr);
	
    for (i=0; i<six; i++)
	    printf("%d ", arr[i]);
	    
	return 0;
}

void reverseArray (int arr[]) {
    int temp;
    int i, j = (six -1); //six - 1 is to have arr[5] with 6th var, not arr[6] wich is empty
    for (i=0; i<(six/2); i++) { //if I have i<six, it does the swap twice, so it prints the initial array
        temp = arr[j];
        arr[j] = arr [i];
        arr[i] = temp;
        j--;
    }
}
