// Nicole, Week 4 23T3
// Tutorial demo code

#include <stdio.h>

#define SIZE 100

int main(void) {

    // ask for temperatues
    printf("Give me some temps pls\n");

    // initialise variable
    int temp[SIZE];
    int highest_temp;

    // scan in 6 temperatures
    int length = 0;
    int scanf_return = scanf("%d", temp[0]);
    while (scanf_return == 1) {
        length++;
        scanf_return = scanf("%d", temp[length]);
    }

    if (length != 0) {
         // find highest
    // assume highest is the first element in array
    highest_temp = temp[0];

    // compare to every element
    // if there is a higher temp, then switch it
    int i = 0;
    while (i < length) {
        if (temp[i] > highest_temp) {
            highest_temp = temp[i];
        }
        i++;
    }

    // print highest
    printf("Highest temperature is %d\n", highest_temp);
    }
   

    return 0;
}