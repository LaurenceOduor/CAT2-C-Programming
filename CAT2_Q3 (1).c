/*
NAME; LAURENCE OCHIENG ODUORI 
REG NO;CT101/G/26674/25
DATE; 6TH NOV, 2025.
DESCRIPTION; C program to read list of integers from a file 
*/


#include <stdio.h>

int main() {
    FILE *infile, *outfile;
    int i, num, sum = 0;
    float average;

    // 1. Write 10 integers to input.txt
    infile = fopen("input.txt", "w");
    if (infile == NULL) {
        printf("Error opening input.txt for writing.\n");
        return 1;
    }

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &num);
        fprintf(infile, "%d\n", num);
    }
    fclose(infile);

    // 2. Read integers, calculate sum and average, write to output.txt
    infile = fopen("input.txt", "r");
    outfile = fopen("output.txt", "w");
    if (infile == NULL || outfile == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    i = 0;
    while (fscanf(infile, "%d", &num) == 1) {
        sum += num;
        i++;
    }

    average = (float)sum / i;
    fprintf(outfile, "Sum = %d\nAverage = %.2f\n", sum, average);
    fclose(infile);
    fclose(outfile);

    // 3. Display both files
    printf("\n--- Contents of input.txt ---\n");
    infile = fopen("input.txt", "r");
    if (infile != NULL) {
        while ((num = fgetc(infile)) != EOF)
            putchar(num);
        fclose(infile);
    }

    printf("\n--- Contents of output.txt ---\n");
    outfile = fopen("output.txt", "r");
    if (outfile != NULL) {
        while ((num = fgetc(outfile)) != EOF)
            putchar(num);
        fclose(outfile);
    }

    return 0;
}