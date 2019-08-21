#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int *absValues,a;

    absValues=calloc(argc,sizeof(int));

    for(int i=0; i<argc; i++) {
        a = atoi(argv[i]);
        if (a < 0) absValues[i] = (a * -1);
        else absValues[i] = a;
    }

    for(int i=1; i<argc; i++) printf("%d\n",absValues[i]);
    
    return 0;
}
