#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main() {
    int table[SIZE];
    int rangeCount[10] = {0};  // Array to hold the count for each range
    int i, randomNumber;

    // Seed the random number generator
    srand(time(0));

    // Fill the table with random numbers from 1-100
    for (i = 0; i < SIZE; i++) {
        randomNumber = (rand() % 100) + 1;  // Generate a number between 1 and 100
        table[i] = randomNumber;
        
        // Determine which range the number belongs to and increment the corresponding counter
        if (randomNumber >= 1 && randomNumber <= 10) {
            rangeCount[0]++;
        } else if (randomNumber >= 11 && randomNumber <= 20) {
            rangeCount[1]++;
        } else if (randomNumber >= 21 && randomNumber <= 30) {
            rangeCount[2]++;
        } else if (randomNumber >= 31 && randomNumber <= 40) {
            rangeCount[3]++;
        } else if (randomNumber >= 41 && randomNumber <= 50) {
            rangeCount[4]++;
        } else if (randomNumber >= 51 && randomNumber <= 60) {
            rangeCount[5]++;
        } else if (randomNumber >= 61 && randomNumber <= 70) {
            rangeCount[6]++;
        } else if (randomNumber >= 71 && randomNumber <= 80) {
            rangeCount[7]++;
        } else if (randomNumber >= 81 && randomNumber <= 90) {
            rangeCount[8]++;
        } else if (randomNumber >= 91 && randomNumber <= 100) {
            rangeCount[9]++;
        }
    }

    // Display the table
    printf("Generated random numbers:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", table[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }

    // Display the count for each range
    printf("\nNumber of values in each range:\n");
    printf("1-10: %d\n", rangeCount[0]);
    printf("11-20: %d\n", rangeCount[1]);
    printf("21-30: %d\n", rangeCount[2]);
    printf("31-40: %d\n", rangeCount[3]);
    printf("41-50: %d\n", rangeCount[4]);
    printf("51-60: %d\n", rangeCount[5]);
    printf("61-70: %d\n", rangeCount[6]);
    printf("71-80: %d\n", rangeCount[7]);
    printf("81-90: %d\n", rangeCount[8]);
    printf("91-100: %d\n", rangeCount[9]);

    return 0;
}
