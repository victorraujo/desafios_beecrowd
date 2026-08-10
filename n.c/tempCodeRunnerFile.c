/*
SORT SIMPLES
*/
#include <stdio.h>
#include <stdbool.h>

#define MAX 3
void save(int n1[], int n2[]) {
    for (int i = 0; i < MAX; i++) {
        n2[i] = n1[i];
    }
}

// show numbers
void display (int n[]) {
    for (int i = 0; i < MAX; i++) {
        printf("%i\n", n[i]);
    }
}

int main(void) {
    int number[MAX];
    int number2[MAX];
    int balde;

    for (int i = 0; i < MAX; i++) {
        scanf("%i", &number[i]);
    }
    // save numbers before the switch
    save(number, number2);
    // loop 
    for (int i = 0; i < MAX; i++) {

        bool swap = false;
        for (int j = 0; j < MAX - 1; j++) {
            if (number[j] > number[j + 1]) { 
                balde = number[j];
                number[j] = number[j + 1];
                number[j + 1] = balde;
                swap = true; 
            }
        }
        if (swap == false) { break; }
    }
    display(number);
    printf("\n");
    display(number2);
    printf("\n");

    return 0;
}