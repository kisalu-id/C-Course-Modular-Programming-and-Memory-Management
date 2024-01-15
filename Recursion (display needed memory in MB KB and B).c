#include <stdio.h>
void print(int);
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
        printf("Error in main function\n");
    }
    printf("Num is: %d\n", num);
    print(num);

    return(0);
}

void print (int a) {
    int temp, thousand = 1000;

    if (a<1000 && a>=0) {
        printf("%d B\n", a);
    }
    
    if (a<1000000 && a>=1000) {
        temp = a/thousand;
        print(a%thousand);
        printf("%d KB and ", temp);
    }
    
    if (a<1000000000 && a>=1000000) {
        temp = a/thousand;
        print(a%thousand);
        printf("%d MB and ", temp);
        
    } else {
        printf("Error in print function\n");
    }
}
