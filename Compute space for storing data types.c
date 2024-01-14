/*A delivery company has hired you to manage their tracking services division. It is your job to store all of the currently used tracking codes in the company's database. These codes consist of either all integers, all decimal numbers, or all characters. The chief technology officer has warned you that the database is old and has limited space, so you want to determine how much memory the tracking codes will occupy before storing them. You decide to write a program to assist you in this process. 

Your program should first read an integer number indicating how many tracking codes you plan on entering. Next, for each successive tracking code your program should read in the integer length of code followed by a space and then the type of code ('i' for integer, 'd' for decimal, or 'c' for character). Finally your program should print the total amount of space required to store all of the tracking codes (in bytes). If the user enters an incorrect type for any tracking number, the program should print 'Invalid tracking code type' and exit.
Examples
Input:

3
10 i
7 c
12 d 

Output:

143 bytes

 
Input:

2
3 c
20 d

Output:

163 bytes

 
Input:

4
5 i
2 d
10 a
3 c

Output:

Invalid tracking code type 

Warning: You will be graded on your output, so do not include any print statements that prompt a user for input.*/

#include <stdio.h>
int count (int, int);
int main () {
    int times, Nbcodes, size, result;
    char type;
    
    scanf("%d", &times);
    
    for (int i=0; i<times; i++) {
        scanf("%d %c", &Nbcodes, &type);
        
        if (type == 'i') {
            size = 4;
        }
        else if (type == 'd') {
            size = 8;
        }
        else if (type == 'c') {
            size = 1;
        } else {
            printf("Invalid tracking code type\n");
            return 0;
        }
        result = result + count(size, Nbcodes);
    }
    printf("%d bytes\n", result);
    return 0;
}
int count (int size, int Nbcodes) {
    return (size*Nbcodes);
}
