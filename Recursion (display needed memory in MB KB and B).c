/*Your job is to write a program that shows, in human-readable form (see below for specifics), how much memory a set of variables of a certain type will use. Your program should read a character that identifies the data type ('i' for int, 's' for short, 'c' for char, 'd' for double). Next it should read an integer that indicates how many variables of the given type you wish to store.

Your program should then calculate the amount of memory required to store the given variables. Your program needs to be written in such a way that it would also perform correctly on other computers. In other words, rather than hard-coding specific sizes for the different variable types, your program needs to use the "sizeof()" function to determine how much memory an individual variable of a given type needs.

Finally, you need to output the amount of space required by your variables to the screen. You need to make sure you provide this output in a form that is easy to read for humans. The following examples illustrate what this means:
Examples

If the user input were:
i 36794

then the amount of space needed (if we assume that an integer uses 4 bytes in memory) would be 4*36794 = 147176 bytes. This corresponds to 147 kilobytes and 176 bytes, so the output should be:
147 KB and 176 B

Input:
d 654250
Output:
5 MB and 234 KB and 0 B

Input:
d 35
Output:
280 B
*/


#include <stdio.h>

#define kilo 1000 //I know that it's 1024 actually
#define mega (kilo * kilo) //1000000
#define giga (kilo * mega) //1000000000

void printFileSize(int);

int main() {
    int num;
    char ch;
    
    scanf("%c %d", &ch, &num);
    
    if (ch == 'i') {
        num = num * sizeof(int);
    }
    else if (ch == 's') {
        num = num * sizeof(short);
    }
    else if (ch == 'c') {
        num = num * sizeof(char);
    }
    else if (ch == 'd') {
        num = num * sizeof(double);
    } else {
        printf("Error: incorrect type or value\n");
    }
    printFileSize(num);
    return(0);
}

void printFileSize (int a) {
    int temp;
    if (a<giga && a>=mega) {
        temp = a/(mega);
        printf("%d MB and ", temp);
        printFileSize(a%mega);
    }
    else if (a<mega && a>=kilo) {
        temp = a/kilo;
        printf("%d KB and ", temp);
        printFileSize(a%kilo);
    }
    else if (a<kilo && a>=0) {
        printf("%d B\n", a);
    } else {
        printf("Error in print function\n");
    }
}
