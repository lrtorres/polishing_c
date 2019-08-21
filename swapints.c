#include <stdio.h>
#include <stdlib.h>

// Swap ints without needing tmp var.

int main(int argc, char *argv[]) {

    int a,b;

    if(argc < 2 || argc > 3) {
        printf("Invalid number of arguments\n");
        exit(1);
    }
    else { 
        a=atoi(argv[1]);
        b=atoi(argv[2]);
    }

    printf("a=%d and b=%d\n",a,b);

    a = a+b; 
    b = a-b; 
    a = a-b; 

    printf("After swap:\n");
    printf("a=%d and b=%d\n",a,b);

    return 0;
}

