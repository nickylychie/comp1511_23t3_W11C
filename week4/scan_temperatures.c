// Nicole, Week 4 23T3
// Tutorial demo code

#include <stdio.h>

#define SIZE 6

int main(void) {

    // ask for temperatues
    printf("Give me 6 temps pls\n");

    // initialise variable
    int temp[SIZE];
    int highest_temp;

    // scan in 6 temperatures
    int i = 0;
    while (i < SIZE) {
        scanf("%d", &temp[i]);
        i++;
    }

    // find highest
    // assume highest is the first element in array
    highest_temp = temp[0];

    // compare to every element
    // if there is a higher temp, then switch it
    i = 0;
    while (i < SIZE) {
        if (temp[i] > highest_temp) {
            highest_temp = temp[i];
        }
        i++;
    }

    // print highest
    printf("Highest temperature is %d\n", highest_temp);

    return 0;
}