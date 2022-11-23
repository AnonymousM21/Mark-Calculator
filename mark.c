/*
 * Sun, 20 Nov - 2022
 * Author : Melaku Negussie (Telegram -@Anonymous_M21)
*/
#include <stdio.h> // For printf(), sprintf(), scanf() functions
#include <stdlib.h> // For atoi() function
#include <string.h> // For strlen() function
#include <ctype.h> // For isdigit() function 

int main(void) {
    char b[8], c[8];
    int a[5], ag = 0, toInt = -1;
    for(int i = 0; i < 5; i++) {
        while(1) {
            printf("Enter Mark %i : ", i + 1);
            scanf("%s", b);
            sprintf(c, "%s", b);
            for(unsigned int j = 0; j < strlen(c); j++) {
                if(isdigit(c[j]) != 0) toInt = atoi(c);
                else {
                    toInt = 0;
                    break;
                }
            }
            if(toInt > 100) {
                printf("Invalid mark, > 100. Enter again between 1-100!.\n");
                continue;
            }
            if(toInt != 0) break;
            else {
                printf("Invalid mark. Enter again between 1-100!\n");
                continue;
            }
        }
        a[i] = toInt;
        ag += a[i];
    }
    printf("__________________\nAggregate : %i\n", ag);
    printf("Pecentile : %.2f%%\n", ((ag/500.0f) * 100));
}
