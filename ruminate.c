#include <stdio.h>

/*
* Count pairs of the same quantity
*/

int ruminate(int n, int ar_count, int* ar) {

	int table[ar_count][2],shrinkme=0,result=0;

	//zero out this new table to -1.
    for (int x=0; x<ar_count; x++){
        for (int y=0; y<2; y++) {
            table[x][y]=-1;
        }
    }

    for(int i=shrinkme; i<ar_count; i++) {

        int color=ar[i];

        for(int j=0; j<ar_count; j++) {
    
            if(table[j][0] == color && table[j][1] >= 1) {
             table[j][1]++;
             shrinkme++;
             break;
            } else {
                if(table[j][0] != color && table[j][1] == -1) {
                    table[j][0]=color;
                    table[j][1]=1;
                    shrinkme++;
                    break;
                }
            }
        
        }
    }

	for (int m=0; m<ar_count; m++){
        // Count all entries that have pairs (e.g. 2 of the same color).
        
        if(table[m][1]>1) {
            if(table[m][1] %2 != 0) {
                result+=((table[m][1]-1)/2);
            } else {
                result+=((table[m][1]/2));
            }
        }
        printf("Index[%d] Color: %d Pair: %d\n",m,table[m][0],table[m][1]);
    }

return result;
}

int main(void) {
    int tab[100]={50,49,38,49,78,36,25,96,10,67,78,58,98,8,53,1,4,7,29,6,59,93,74,3,67,47,12,85,84,40,81,85,89,70,33,66,6,9,13,67,75,42,24,73,49,28,25,5,86,53,10,44,45,35,47,11,81,10,47,16,49,79,52,89,100,36,6,57,96,18,23,71,11,99,95,12,78,19,16,64,23,77,7,19,11,5,81,43,14,27,11,63,57,62,3,56,50,9,13,45};

    printf("%d\n",ruminate(100,100,tab));

return 0;
}
