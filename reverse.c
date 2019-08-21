#include <stdio.h>

int main(void) {
    const int LENGTH = 13;
    int tab[LENGTH]={1,2,3,4,5,6,7,8,9,10,11,12,13};
    int head,tail;

    for (int i=0; i < LENGTH/2; i++){
        head=tab[i];
        tab[i] = tab[(LENGTH-1)-i];
        tab[(LENGTH-1)-i]=head;
    }

    for (int i=0; i<LENGTH; i++) {
      printf("%d\n",tab[i]);
    }

    return 0;
}
