/*
Name:LAURENCE ODUORI OCHIENG
Reg No:CT101/G/26674/25
Descripion:Declare and initialize a 2D array named scores with given values

i.Define an Array- An array is the collection of elements of the same data type stored in a contiguos memory locations.
ii. Declare and initialize the 2D Array 

65 92
84 72
35 70
59 67

iii. Print the elements using nested for loop 
*/


#include <stdio.h>

int main() {
    int scores[4][2] = {
        {65, 92},
        {84, 72},
        {35, 70},
        {59, 67}
    };

    int i, j;

    printf("Scores:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n"); // move to next row
    }

    return 0;
}

		